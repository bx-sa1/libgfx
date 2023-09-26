#define LIBGFX_OPENGL
#include "libgfx.h"

gfx *gfx_init() {
    gfx *g = NULL;
    malloc(g, sizeof(gfx));
    return g;
}

void gfx_close(gfx *g) {
    free(g);
}

buffer *new_buffer() {
    buffer *b = NULL;
    malloc(b, sizeof(buffer));

    unsigned int buf_id;
    glGenBuffers(1, &buf_id);

    
}