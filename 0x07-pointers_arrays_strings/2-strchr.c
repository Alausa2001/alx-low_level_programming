#include "main.h"
/**
 * *_strchr - locates a character ina string
 * @s: string
 * @c: character to locate
 * Return: i c is found return c else
 * return null
 */
char *_strchr(char *s, char c)
{

	while (*s)
	{
		s++;
		if (*s == c)
		{
			return (s);
		}

	}
	return (0);
}
