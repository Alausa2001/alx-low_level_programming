#include "function_pointers.h"
/**
 * print_name - prints name
 * @name: name to print
 * @f: function pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f = &print_name;
	_putchar('f');
}
