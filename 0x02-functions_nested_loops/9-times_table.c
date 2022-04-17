#include "main.h"
/**
 * times_table - print 9 times tables starting from o
 * Return: void
 */
void times_table(void)
{
	int p, q;
	int result;

	p = '0';
	q = '0';

	result = p * q;

	for (; p <= 9; p++)
	{
		for (; q <= 9; q++)
		{
			if ((p == 0) || (q == 0))
			{
				_putchar(0);
			}

			else if (result <= 9)
			{
			_putchar(result);
			_putchar(',');
			_putchar(' ');
			}
			else
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}

		}
		_putchar('\n');

	}
}
