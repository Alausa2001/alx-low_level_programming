#include "main.h"
#include <stdio.h>
/**
 * print_array - print value using pointers
 * @n: max no of elements
 * @a: pointer
 * Return: void
 */
void print_array(int *a, int n)
{
	int lett = 0;

	for (; lett < n; lett++)
	{
		if (lett == (n - 1))
			printf("%d", a[lett]);
		else
			printf("%d, ", a[lett]);
	}
	printf("\n");
}
