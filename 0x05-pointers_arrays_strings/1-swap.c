#include "main.h"
/**
 * swap_int - sswap the value of
 * two integers
 * @a: input integer (pointer)
 * @b: integer pointer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
