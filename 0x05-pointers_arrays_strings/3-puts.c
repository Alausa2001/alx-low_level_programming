#include "main.h"
/**
 * _puts - write a function that print a string
 * return: void
 */
void _puts(char *str)
{
	char i = 0;

	while (*str != '\0')
	{
		if (*str != '\0')
		_puts(str);
		str++;
		i++;
	}
}

