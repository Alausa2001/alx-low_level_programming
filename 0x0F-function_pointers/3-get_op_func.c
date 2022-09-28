#include <stdlib.h>
#include <string.h>
#include <stdio.h>
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
	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}
	printf("Error\n");
	exit(99);
}
