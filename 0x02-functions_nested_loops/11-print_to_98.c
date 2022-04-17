#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - check main
 * @n: an input integer
 * Description: A function that prints
 * natural numbers from n to 98
 * RETURN: VOID
 */
int main(void)
{
	int n;

	for (n = '0'; n < '99'; n++)
	{
		printf(n);
		{
			printf(',');
			printf(' ');
		}
	}
}
