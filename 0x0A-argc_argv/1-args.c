#include <stdio.h>
#include <stdlib.h>
/**
 * main - function print a number
 * @agrc: The size of the argv array
 * @agrv: An array of size argc
 * Return: 0
 */
int main(int agrc, char **agrv)
{
	/* enaabling cmpiler to compile despite
	 * unused variable */
	(void)agrv;
	printf("%d\n", agrc);

	return (0);
}
