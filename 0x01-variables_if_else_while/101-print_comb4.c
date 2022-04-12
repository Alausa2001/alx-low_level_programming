#include <stdio.h>
/**
 * main - print three-figures numbers
 * Return: Always 0
 */
int main(void)
{
	int a, b, c;

	for (a = '0'; a < '8'; a++)
	{
		for (b = '0'; b <= '8'; b++)
		{
			for (c = '0'; c <= '9'; c++)
			{
				if (a < b && b < c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a == '7' && b == '8' && c > '8')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
