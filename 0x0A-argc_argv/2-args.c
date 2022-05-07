#include <stdio.h>
/**
 * main - program prints all arguments it receives
 * @agrc: no of aruments
 * @agrv: array of command line arguments
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
