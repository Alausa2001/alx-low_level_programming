#include "main.h"
/**
 * more_numbers - print 1 to 10 ten times
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j < 15; j++)
			_putchar(j);
		_putchar('\n');
	}
	_putchar('\n')
}
