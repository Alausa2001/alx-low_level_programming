#include <stdio.h>
/**
 * main - print non_same two digit
 * Return: Always 0
 */
int main(void)
{
	int p, q;

	for (p = '0'; p <= '8'; p++)
	{
		for (q = '0'; q <= '9'; q++)
		{
			if (p < q)
			{
				putchar(p);
				putchar(q);
				if (p == '8' && q == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

