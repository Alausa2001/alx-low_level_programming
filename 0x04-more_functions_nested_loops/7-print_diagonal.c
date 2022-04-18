#include "main.h"
/**
 * print_diagonal - i like diagonals
 * @n: no of times
 * Return: void
 */
void print_diagonal(int n)
{
	int i = 0, j;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}

	}
	else
		_putchar('\n');
}
