#include "main.h"
/**
 * _puts_recursion - print a string recursively
 * @s: string to print
 * Return: void
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		return;
	}
	else
	{
		_putchar(s[i]);
		s++;
	}
	_putchar('\n');
}
