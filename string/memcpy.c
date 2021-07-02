#include "string.h"

void *memcpy(void *restrict dest, const void *restrict src, unsigned int n) {
	unsigned char *d = dest;
	const unsigned char *s = src;

	while(n) {
		*d++ = *s++;
		n--;
	}

	return dest;
}