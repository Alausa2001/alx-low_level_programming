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
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 'c')
		{
			break;
		}
		return (s[i]);

		else
		{
			continue;
		}
		return (NULL);
	}
}
