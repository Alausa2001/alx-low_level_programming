#include "main.h"
/**
 * times_table - print 9 times tables starting from o
 * Return: void
 */
void times_table(void)
{
	int p, q, result;

	p = 0;
	q = 0;

	result = p * q;
	for (; p <= 9; p++)
	{
		for (; q <= 9; q++)
		{
			_putchar(result);
			_putchar(',');
			_putchar(' ');
		}
	}
}
