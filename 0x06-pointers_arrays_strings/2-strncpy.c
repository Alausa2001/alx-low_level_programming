#include "main.h"
/**
 * _strncpy
 * @src: original
 * @dest: copy
 * @n: no of bytes
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int cpy;

	for (cpy = 0; cpy < n && src[cpy] != '\0'; cpy++)
	{
		dest[cpy] = src[cpy];
	}
	dest[cpy] = '\0';
	return (dest);
}
