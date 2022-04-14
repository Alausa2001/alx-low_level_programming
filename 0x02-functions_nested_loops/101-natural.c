#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
	int i, j;

	i = 0;

	j = i;

	for (i = 0; i <= 1023; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			j += i;
	}
printf("%d\n", j);
return (0);
}
