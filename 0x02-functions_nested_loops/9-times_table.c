#include "main.h"
/**
 * times_table - print 9 times tables starting from o
 * Return: void
 */
void times_table(void)
{
	int p, q;
	int result;
	tens, ones;

	for (p = 0; p <= 9; p++)
	{
		for (p = 0; q <= 9; q++)
		{
			result = p * q;
			tens = result / 10;
			ones = result % 10;

			if (p == 0)
			{
				_putchar('0');
			}

			else if (result < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(ones + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(tens + '0');
				_putchar(ones + '0');
			}

		}
		_putchar('\n');

	}
}
