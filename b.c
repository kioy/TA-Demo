
#include "a.h"



void* foo () {

	int x = 20;
	char* p;

	p = yymalloc(20);
	if (p) {

		p[0] = 'x';

	}

	return p;
}
