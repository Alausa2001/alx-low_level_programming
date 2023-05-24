#include "main.h"
/**
 * _strpbrk - searches for a string for aany set of bytes
 * @s: string to be searched
 * @accept: contains the matching chars
 * Return: It returns a pointer to the character in s1 that
 * that matches char in accept or null if there is no match
 */
char *_strpbrk(char *s, char *accept)
{
	char *ptr = accept;

	while (*s)
	{
		ptr = accept;
		while (*ptr)
		{
			if (*s == *ptr)
				return (s);
			*ptr++;
		}
		*s++;
	}
	return (NULL);
}
