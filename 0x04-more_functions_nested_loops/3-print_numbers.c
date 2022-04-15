#include "main.h"
/**
 * print_numbers - Write a function that prints the numbers, from 0 to 9
 * Return: always 0
 */
void print_numbers(void)
{
	int a;

	a = 0;
	while (a < 10)
	{
		_putchar(a);
		a++;
	}
	putchar('\n');
}

