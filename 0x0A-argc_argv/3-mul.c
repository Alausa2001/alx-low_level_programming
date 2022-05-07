#include <stdio.h>
#include <stdlib.h>
/**
 * main - program prints multiplies two integers
 * @agrc: no of command line arguments
 * @agrv: array of coomand line arguments
 * Return: 1 if it does not receive two arguments
 */
int main(int argc, char **argv)
{
	int i, mul = 1;

	if (argc > 1 && argc < 4)
	{
		for (i = 1; i < argc; i++)
		{
			mul = mul * atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
