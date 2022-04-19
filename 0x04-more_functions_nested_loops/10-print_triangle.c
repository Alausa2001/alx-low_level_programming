#include "main.h"
/**
 * print_triangle - triianles
 *
 * @size: size of triangle
 * Return: void
 */
void print_triangle(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				if (b < size - a)
				{
					_putchar(' ');
				}
				else
					_putchar(35);
			}
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
