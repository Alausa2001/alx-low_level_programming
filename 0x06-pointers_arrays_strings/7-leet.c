#include "main.h"
/**
 * *leet - this function encodes a string into 1337 code(leet code)
 * @s: the input string
 * Return: the encoded string
 */
char *leet(char *s)
{
	char lett[] = "LlTtOoeEaA";
	char no_code[] = "1177003344";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; no_code[j] != '\0'; j++)
		{
			if (s[i] == lett[j])
				s[i] = no_code[j];
		}
	}
	return (s);
}
