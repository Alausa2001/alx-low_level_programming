#include "main.h"
/**
 * print_alphabet_x10 - Write a function that prints
 * 10 times the alphabet, in lowercase
 * in lowercase, followed by a new line.
 * Return: void
 */
void print_alphabet_x10(void)
{
	char b;
	int a;


	for (a = '0'; a <= '9'; a++)
	{
		for (b = 'a'; b <= 'z'; b++)
			_putchar(b);
		_putchar('\n');
	}
}
