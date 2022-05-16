#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * op_add - returns the sum of a and b
 * @a: input integers 1
 * @b: second input
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub -  returns the difference of a and b
 * @a: first input integer
 * @b: second input integer
 * Return: difference btw the input integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - return the product of a and b
 * @a: input
 * @b: tnput(integer)
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - return the qoutient of a and b
 * @a: input (integer)
 * @b: input
 * Return: a/b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}
/**
 * op_mod - returns the remainder of the division of a by b
 * @a: input integer
 * @b: second integer
 * Return: a%b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
