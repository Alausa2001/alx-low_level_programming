#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - A function that print numbers followed by a new line
 * @separator: A string to be printed between numbers
 * @n: const parameter
 * @...: Other parameters
 * Return: The of all parameters with separator in between if not null
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int number;

	va_start(args, n);
	for (; i < n; i++)
	{
		number = va_arg(args, int);
		printf("%d", number);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
