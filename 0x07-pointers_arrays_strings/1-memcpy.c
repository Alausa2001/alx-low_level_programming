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

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
