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
	else if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
