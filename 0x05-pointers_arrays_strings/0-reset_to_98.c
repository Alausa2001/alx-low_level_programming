#include"main.h"
/**
 * reset_to_98 - update the value
 * of an integer to 98
 * @n: points to p
 *
 * Return: void
 */
void reset_to_98(int *n)
{
	int p;

	p = 22;
	n = &p;

	*n = 98;
}
