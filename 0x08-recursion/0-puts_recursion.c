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
		_putchar('\n');
		return;
	}
	else if (s[i] != '\0')
	{
		_putchar(s[i]);
		_puts_recursion(s[i + 1]);
	}
	_putchar('\n');
}
