#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func -  the function that selects the correct function
 * the operation asked by the user
 * @s: An input char pointer operator passed as argument
 * Return: a pointer to the function that corresponds to the
 * operator given as a parameter.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;
	i = 0;
	while (i < 5)
	{
		if (*s == *ops[i]->op)
			return 
