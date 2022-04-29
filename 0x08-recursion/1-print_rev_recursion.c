#include "main.h"
/**
 * _print_rev_recursion - print string in reverse
 * @s: string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int n = 0;


	if (s[n] == '\0')
		return;
	else if (n > 0)

		_putchar(s[n]);
	_print_rev_recursion(*s - 1);
}
