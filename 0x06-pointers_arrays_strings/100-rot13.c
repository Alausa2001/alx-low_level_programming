#include "main.h"
/**
 * *rot13 - encodes a string into ROT13 format
 * @s: input string
 * Return: The ROT13 format of the input string
 */
char *rot13(char *s)
{
	char original[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; original[j] != '\0'; j++)
		{
			if (s[i] == original[j])
			{
				s[i] = rot13[j];
				break;
			}
		}
	}
	return (s);
}
