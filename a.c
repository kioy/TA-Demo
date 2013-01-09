
#include <stdlib.h>
#include <malloc.h>


void * yymalloc(size_t size) {

	if (size > 1024) {
		return NULL;
	}

	return malloc(size);

}

