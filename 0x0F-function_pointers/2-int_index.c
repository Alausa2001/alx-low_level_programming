#include "function_pointers.h"
/**
 * int_index - Write a function that searches for an integer.
 * @array: array name
 * @size: array size
 * @cmp: fumntion pointer
 * Return: -1 if size <= 0, -1 if no element is found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
			else
				return (-1);
		}
	}
}
