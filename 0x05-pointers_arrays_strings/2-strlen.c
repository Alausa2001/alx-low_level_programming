#include "main.h"
/**
 * _strlen - function that prints string length
 * @s: real length
 * Return: string length
 */
int _strlen(char *s)
{
	int l;

	while (*(s + l) != '\0')
	{
		_putchar(s[l]);
		l++;
	}
	return (l);
}
