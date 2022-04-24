#include "main.h"
/**
 * _strcat - concatenates two strings
 * @src: source
 * @dest: destination
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int d, s;

	d = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	s = 0;
	while (src[s] != '\0')
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	return (dest);
}
