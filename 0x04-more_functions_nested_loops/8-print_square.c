#include "main.h"
/**
 * print_square - squares
 * @size: inpit
 * Return: void
 */
void print_square(int size)
{
	int i, j;

	if (size >= 1)
	{
		for (i = 1; i < size; i++)
		{
			for (j = 1; j < size; j++)
				_putchar(35);
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
