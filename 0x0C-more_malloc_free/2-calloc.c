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
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	return (p);
}
