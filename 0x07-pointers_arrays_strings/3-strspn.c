#include "main.h"
/**
 * _strspn - function returns the no of bytes
 *  in the initial segment of s which consist only of bytes from accept
 *  @s: full string
 *  @accept:  substring to return
 *  Return: length of substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;

	while (s[i] != '\0')
	{
		for (j = 0; j <= i; j++)
		{
			if (accept[j] == '\0')
				return (j);
		}
		i++;
	}
	return (j);

}
