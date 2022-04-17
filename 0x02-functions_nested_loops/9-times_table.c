#include "main.h"
/**
 * times_table - print 9 times tables starting from o
 * Return: void
 */
void times_table(void)
{
	int p, q, result;

	result = p * q;
	for (p = 0; p <= 9; p++)
	{
		for (q = 0; q <= 9; q++)
		{
			_putchar(result);
			_putchar(',');
			_putchar(' ');
		}
	}
}
