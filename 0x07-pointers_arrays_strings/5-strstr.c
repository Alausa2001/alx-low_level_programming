#include "main.h"
/**
 * strstr - finds the occurence of a substring
 * in a string
 * @haystack: the string
 * @needle: the substring
 * Return: beginning of locared substring or null
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; j <= i && needle[j] != '\0'; j++)
		{
			if (haystack[i] = needle[j])
				return (needle);
		}
	}
	return (0);
}
