#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - function that searches for a
 * value in an array of integers using the Linear search algorithm
 * @array: pointer to the first element to be searched
 * @size: size of the array
 * @value: the objects that is being searched
 * Return: first index where the value is found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (!array)
		return (-1);
	for (; index < size; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
