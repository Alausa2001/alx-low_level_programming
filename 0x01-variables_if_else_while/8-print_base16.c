#include <stdio.h>
/**
 * main - hexadecimal
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	char ch;

	for (n = 38; n < 48; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

