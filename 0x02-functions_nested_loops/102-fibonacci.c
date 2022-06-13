#include <stdio.h>
/**
 * main - entry point
 * Return: zero
 */
int main(void)
{
	int i = 0;
	long int a = 0, b = 1, next;

	while (i < 50)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%lu", next);
		if (i < 50)
		{
			printf(", ");
		}
	i++;
	}
	putchar('\n');
	return (0);
}
