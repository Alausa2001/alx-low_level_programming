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

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (cents < 0)
	{
		printf("0\n");
	}
	if (cents >= 25)
	{
		coins += cents / 25;
		cents = cents % 25;
	}
	if (cents % 10 >= 0)
	{
		coins += cents / 10;
		cents = cents % 10;
	}
	if (cents % 5 >= 0)
	{
		coins += cents / 5;
		cents = cents % 5;
	}
	if (cents % 2 >= 0)
	{
		coins += cents / 2;
		cents = cents % 2;
	}
	if (cents % 1 >= 0)
	{
		coins += cents / 1;
	}
	printf("%d\n", coins);
	return (0);
}
