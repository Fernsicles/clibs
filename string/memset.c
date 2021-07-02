#include "string.h"

void *memset(void *dest, int c, unsigned int n) {
	unsigned int val = (c << 24) | ((c & 0xFF) << 16) | ((c & 0xFF) << 8) | (c & 0xFF);
	unsigned char *d = dest;
	unsigned int i = 0;
	unsigned int l = n >> 2;

	while(i < l) {
		((unsigned int *) d)[i] = val;
		i += 1;
	}

	n = n - (i << 2);

	switch(n) {
		case 1: 
			*((unsigned char *) d) = val;
			break;
		case 2:
			*((unsigned short *) d) = val;
			break;
		case 3:
			*((unsigned short *) d++) = val;
			*((unsigned char *) d) = val;
			break;
		default:
			break;
	}

	return dest;
}