#include "main.h"
/**
 * _pow_recursion - return a function that
 * return x ** y
 * @x: the no
 * @y: index
 * Return: x**y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
		return (x * _pow_recursion(x * *(y - 1)));
}
