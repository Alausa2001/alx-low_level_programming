#include <stdio.h>
#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted, equally
 * distibuted array
 * @array: the array to search from
 * @size: the size of the array
 * @value: what is being sought
 * Return: if value is found, it return its index else returns -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t hi = size - 1, low = 0;
	size_t pos;

	if (!array)
		return (-1);
	while (low <= hi && value <= array[hi])
	{
		pos = low + (((hi - low) / (array[hi] - array[low])) * (value - array[low]));
		if (array[pos] == value)
			return (pos);
		if (value > array[pos])
			low = pos + 1;
		if (value < array[pos])
			hi = pos - 1;
	}
	return (-1);
}
