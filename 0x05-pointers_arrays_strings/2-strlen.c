#include "main.h"
/**
 * _strlen - function that prints string length
 * @s: real length
 * Return: string length
 */
int _strlen(char *s)
{
	int l;

	l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
