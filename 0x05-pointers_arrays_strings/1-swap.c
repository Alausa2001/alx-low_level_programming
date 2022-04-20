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
	int q;

	p = *a;
	q = *b;
	*a = *b;
	p = q;

	a = &p;
	b = &q;
	*a = q;
	*b = p;
}
