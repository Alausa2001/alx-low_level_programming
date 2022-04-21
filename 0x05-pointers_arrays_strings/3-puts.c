#include "main.h"
/**
 * _puts - write a function that print a string
 * return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		if (*str != '\0')
		_puts(str);
		str++;
	}
}

