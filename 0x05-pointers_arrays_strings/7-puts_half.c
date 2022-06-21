#include "main.h"
/**
 * puts_half - this function prints the last half of a string
 * of a string
 * @str: input string
 * Return: nothing
 */
void puts_half(char *str)
{
	int len = 0;
	int half, n;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		half = (len / 2);
		while (half < len)
		{
			_putchar(str[half]);
			half++;
		}
		_putchar('\n');
	}
	else if (len % 2 != 0)
	{
		n = ((len / 2) + 1);
		while (n < len)
		{
			_putchar(str[n]);
			n++;
		}
		_putchar('\n');
	}
}
