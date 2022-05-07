#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - print sum of numbers
 * @agrc: no of arguments
 * @agrv: array of integers to add
 * Return: return 1 if inputs contains a symbol
 */
int main(int agrc, char **agrv)
{
	int sum = 0;
	int i;
	int j = 0;

	if (agrc > 1)
	{
		for (i = 0; i < agrc; i++)
		{
			sum = sum + atoi(agrv[i]);
		}
		printf("%d\n", sum);
	}
	if (agrc == 1)
		printf("%d\n", j);
}
