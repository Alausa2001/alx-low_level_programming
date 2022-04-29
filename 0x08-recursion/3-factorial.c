#include "main.h"
/**
 * factorial - gives the factorial of
 * a certin number
 * @n: input integer
 * Return: n!
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
