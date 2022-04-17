#include "main.h"
/**
 * times_table - print 9 times tables starting from o
 * Return: void
 */
void times_table(void)
{
	int p, q;
	int result;

	for (p = '0'; p <= '9'; p++)
	{
		for (q = '0'; q <= '9'; q++)
		{
			result = p * q;

			if (result <= '9')
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
