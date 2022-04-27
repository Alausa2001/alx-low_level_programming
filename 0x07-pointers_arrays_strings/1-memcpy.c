#include "main.h"
/**
 * *_memcpy - copy memory from a source to
 * a destination string
 * @src: source
 * @dest: where the memory is copied to
 * @n: no of byte to copy
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
