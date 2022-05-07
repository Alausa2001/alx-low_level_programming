#include <stdio.h>
#include <stdlib.h>
/**
 * main - program prints multiplies two integers
 * @agrc: no of command line arguments
 * @agrv: array of coomand line arguments
 * Return: 1 if it does not receive two arguments
 */
int main(int agrc, char **agrv)
{
	int i = 0;
	int mul = 1;

	if (agrc > 1 && agrc < 4)
	{
		for (i = 1; i < agrc; i++)
		{
			mul = mul * atoi(agrv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
