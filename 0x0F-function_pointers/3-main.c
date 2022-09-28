#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - takes two args and performs arithmetic operation on them
 * @ac: argument count
 * @av: arguments array
 * Return: 0 if successful
 */
int main(int ac, char **av)
{
	int ans;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	ans = get_op_func(av[2])(atoi(av[1]), atoi(av[3]));
	printf("%d\n", ans);
	return (0);
}
