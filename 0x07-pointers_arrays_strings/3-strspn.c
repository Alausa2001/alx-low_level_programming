#include "main.h"
/**
 * _strspn - function returns the no of bytes
 *  in the initial segment of s which consist only of bytes from accept
 *  @s: pointer to full string
 *  @accept: pointer to substring
 *  Return: length of substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;
	while (s[i] != '\0');
	{
		i++;
	}
	j = 0;
	while (accept[j] <= s[i])
	{
		j++;
	}
	return (accept);
}
