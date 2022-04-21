#include "main.h"
/**
 * print_rev - print a string in reverse
 * @s: string to be printed
 * Return: void
 */
void print_rev(char *s)
{
	int lett;

	lett = 0;
	while (s[lett] != '\0')
	{
		lett++;
	}
	lett--;
	while (lett >= 0)
	{
		_putchar(s[lett]);
		lett--;
	}
	_putchar('\n');
}
