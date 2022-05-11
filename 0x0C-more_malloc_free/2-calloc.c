#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates contiguous memory
 * nmemb: no of blocks to allocate
 * size: size of each block
 * Return: calloc returns a void to the base address
 * or null if calloc fails or nmemb or size == 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p, *p1;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p1 = p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		*p1++ = 0;
	return (p);
}
