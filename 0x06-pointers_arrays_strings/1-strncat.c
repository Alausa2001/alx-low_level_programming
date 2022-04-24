#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: destination string
 * @src: sourcestring
 * @n: amount of bytes from source string
 * Return: destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	*(dest + j) = '\0';
	return (dest);
}
