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
	while (dest[d] !- '\0')
	{
		d++;
	}
	for (s = 0; src[s] != '\0'; s++)
	{
		dest[d] = src[s];
		d++;
	}
	dest[d] = '\0';
	return (dest);
