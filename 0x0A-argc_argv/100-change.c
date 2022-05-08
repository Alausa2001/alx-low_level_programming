#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the minimum number of coins to make
 * change for an amount of money
 * @argc: no of commamd line arguments
 * @argv: an array containing the command line argumennts
 * Return: 0 if argument is negative
 * or 'error' if the no of argument is not one(!name)
 */
int main(int argc, char **argv)
{
	int cents, coins;
	int i = 1;

	coins = 0;

	cents = atoi(argv[i]);

	if (argc != 2 || argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	if (cents < 0)
	{
		printf("0\n");
	}
	while (cents > 0)
	{
		if (cents >= 25)
			cents = cents - 25;
		else if (cents >= 10)
			cents = cents - 10;
		else if (cents >= 5)
			cents = cents - 5;
		else if (cents >= 2)
			cents = cents - 2;
		else if (cents >= 1)
			cents = cents - 1;
		coins += 1;
	}
	printf("%d\n", coins);
	return (0);
}
