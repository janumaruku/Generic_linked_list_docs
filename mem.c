#include "mem.h" 

void *
mem_zmalloc(size_t s) {
    void *p;
    if (!(p = malloc(s))) return NULL;
    memset((char *) p, 0, s);
    return p;
}    

void *
mem_free(void *p) {
    if (p) free(p);
    return NULL;
}
