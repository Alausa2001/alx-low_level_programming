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

	if (i < n)
	{
		for (i = 0; *(src + i) != '\0'; i++)
	}
	for (j = 0; dest[j] != '\0'; j++)
	{
		dest[j + i] = src[i];
		j++;
		i++;
	}
	return (dest);
}

