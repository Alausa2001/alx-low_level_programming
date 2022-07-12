#include "main.h"
/**
 * *cap_string - This function capitalizes every word in a string
 * @s: input string
 * Return: The capiltalized string
 */
char *cap_string(char *s)
{
	char separator[] = " \t\n,;.!?\"(){}";/*Separators of words:*/
	int i, j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
				s[i] = s[i] - ('a' - 'A');
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (separator[j] == *(s + i - 1))
						s[i] -= ('a' - 'A');
				}
			}
		}
	}
	return (s);
}
