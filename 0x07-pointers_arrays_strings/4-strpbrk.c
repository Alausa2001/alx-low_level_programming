#include "main.h"
/**
 * _strpbrk - searches for a string for aany set of bytes
 * @s: string to be searched
 * @accept: contains the matching chars
 * Return: It returns a pointer to the character in s1 that
 * that matches char in accept or nu if there is no match
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				return (&s[i]);
		}
	}
}
