#include "main.h"
/**
 * _strlen - function that prints string length
 * @s: real length
 * Return: string length
 */
int _strlen(char *s)
{
	int l;
	
	for (l = 0; *(s + l) != '\0'; l++)
	{
		_putchar(s[l]);
		s++;
		l++;
	}
	return (l);
}
			
