#include "main.h"
/**
 * *_strcpy - copies the content of
 * one string to another
 * @src: original
 * @dest: copy
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int lett;

	for (lett = 0; src[lett] != '\0'; lett++)
	{
		dest[lett] = *(src + lett);
	}
	dest[lett] = '\0';
	return (dest);
}
