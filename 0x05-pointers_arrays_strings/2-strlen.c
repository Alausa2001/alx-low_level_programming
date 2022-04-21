#include "main.h"
/**
 * _strlen - function that prints string length
 * @s: real length
 * Return: string length
 */
int _strlen(char *s)
{
	int l;

	if (*s != '\0')
	{
		for (l = 0; *(s + l) >= *(s + 0); l++)
		{
			_putchar(s[l]);
			l++;
		}
		return (l);
	}
}
			
