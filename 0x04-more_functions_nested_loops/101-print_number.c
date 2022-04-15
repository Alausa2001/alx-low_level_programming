#include "main.h"
/**
 * print_number - lets try this out
 * @n: integer
 * Return: void
 */
void print_number(int n)
{
	if (n >= 0 || n <= 0)
	{
		_putchar(n);
	}
	if (n % 10 != 0)
		_putchar(n / 10);
}
