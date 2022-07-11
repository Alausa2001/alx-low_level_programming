#include "main.h"
/**
 * *string_toupper - this func turns the array of characters to
 * uppercase
 * @s: the string whose characters id to be converted
 * Return: Returns the input string with all its chars being turned to
 * uppercase
 */
char *string_toupper(char *s)
{
	int index = 0;

	while (s[index] != '\0')
	{
		if (s[index] >= 'a' && s[index] <= 'z')
		{
			s[index] = s[index] - ('a' - 'A');
		}
		else
			s[index] = s[index];
		index++;
	}
	return (s);
}
