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

	p = malloc(nmemb * size);

	if (nmemb || size == 0)
		return (NULL);
	if (p == NULL)
		return (NULL);
}
