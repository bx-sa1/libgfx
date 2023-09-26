#ifndef LIBGFX_H_
#define LIBGFX_H_

typedef struct gfx_s {
#ifdef LIBGFX_OPENGL
    unsigned int *bound_buffers;
    int bound_buffers_Size;
#endif
} gfx;

typedef struct buffer_s {
    enum buffer_target;
    unsigned int id;
    int size;
} buffer;

gfx *gfx_init();
void gfx_stop();

buffer *new_buffer(); //Create a new buffer
void alloc(buffer *b, int size); //allocate space for the  buffer
int push(buffer *b, void *data, int size);
void clear(buffer *b);
void clear(buffer *b, int offset, int size);
void *map(buffer *b);
void unmap(buffer *b, void *map);