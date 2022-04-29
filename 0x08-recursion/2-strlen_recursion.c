#include "main.h"
/**
 * _strlen_recursion - return string length
 * but do it recursively
 *
 * @s: string
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	int l = 0;

	if (s[l] == '\0')
	{
		return (l);
	}
	else if (s[l] != '\0')
	{
		_strlen_recursion(l);
		l++;
	}
}
