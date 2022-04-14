#include "main.h"
/**
 * print_last_digit - print last digit of a number
 * @r: interger input
 * Return: last digit
 */
int print_last_digit(int r)
{
	int n;

	if (r > 0)
		n = r % 10;
	else 
		n = -1 * (r % 10);
	_putchar(n);
	return (n);
}
