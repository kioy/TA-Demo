
#include "a.h"



void* foo () {

	int x = 20;
	char* p;
	char* q;

	p = yymalloc(20);
	if (p) {

		p[0] = 'x';
		p[20] = 'Y';

	}

	q = yymalloc(20);

	return p;
}
