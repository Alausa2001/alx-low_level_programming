#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - A function that print strings followed by a new line
 * @separator: is printed inbetween the strings if not null
 * @n: const parameter
 * @...: Other parameters
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);
	for (; i < n; i++)
	{
		str = va_arg(args, char*);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != NULL && i < n - 1)
			printf("%s", str);
	}
	printf("\n");
	va_end(args);
}
