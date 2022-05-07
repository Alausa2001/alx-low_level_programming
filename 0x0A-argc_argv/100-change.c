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
}

