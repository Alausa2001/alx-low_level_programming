#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the name of file
 * @agrc: no of command line argument
 * @agrv: An array containing the program command line arguments
 * Return: 0
 */
int main(int agrc, char **agrv)
{
	int i = 0;

	for (; i < agrc; i++)
	{
		printf("%s\n", agrv[i]);
	}
	return (0);
}
