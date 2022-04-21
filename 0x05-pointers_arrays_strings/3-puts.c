#include "main.h"
/**
 * _puts - write a function that print a string
 * @str: string whose content
 * is to be printed
 * return: void
 */
void _puts(char *str)
{
	int p;

	for (p = 0; *(str + p) != 0; p++)
	{
		_putchar(str[p]);
	}
	_putchar('\n');
}
