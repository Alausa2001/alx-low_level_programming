#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - check main
 * @n: an input integer
 * Description: A function that prints
 * natural numbers from n to 98
 * RETURN: VOID
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}
