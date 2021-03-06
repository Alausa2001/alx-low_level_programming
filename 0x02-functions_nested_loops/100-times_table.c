#include "main.h"
/**
 * print_times_table - print 0 to 14 times table
 * @n: input integer
 * Return: void
 */
void print_times_table(int n)
{
	int row, column, ones, product, tens;

	if (n >= 0 && n < 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <= n; column++)
			{
				product = row * column;
				tens = product / 10;
				ones = product % 10;
				if (column == 0)
				{
					_putchar('0');
				}
				else if (product < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(ones + '0');
				}
				else if (product > 9 && product < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(tens + '0');
					_putchar(ones + '0');
				}
				else if (product > 100 && product < 1000)
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
}
