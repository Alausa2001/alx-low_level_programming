#include "main.h"
/**
 * print_numbers - Write a function that prints the numbers, from 0 to 9
 * Return: void
 */
void print_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
