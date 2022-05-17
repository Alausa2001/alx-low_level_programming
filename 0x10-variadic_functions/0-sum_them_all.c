#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - this function that sums all its parameters
 * @n: cost parameter
 * @...: Other parameters
 * Return: The of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (; i < n; i++)
		sum = sum + va_args(args, int);
	va_end(args);
	return (sum);
}
