
#ifndef _mem_h_
#define _mem_h_
#include <stdlib.h>
#include <string.h>

#define mem_malloc(s) 		malloc(s)
#define mem_realloc(p, s) 	realloc((p), (s))
#define mem_clean(p) 		(p) = mem_free((p))
#define mem_strdup(s)       strdup(s)

void * mem_zmalloc(size_t s);
void * mem_free(void *p);

#endif
