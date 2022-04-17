#include "main.h"
/**
 * times_table - print 9 times tables starting from o
 * Return: void
 */
void times_table(void)
{
	int p, q;
	int result;

	for (p = 0; p <= 9; p++)
	{
		for (p = 0; q <= 9; q++)
		{
			result = p * q;
			if (p == 0)
			{
				_putchar('0');
			}

			else if (result <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((result / 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(',');
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}

		}
		_putchar('\n');

	}
}
