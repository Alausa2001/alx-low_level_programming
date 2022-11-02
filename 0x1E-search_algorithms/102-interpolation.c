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
	size_t hi = size - 1;
	size_t l = 0;
	/* hi = end position, l = start position. (betty caused it) */
	size_t pos;


	if (!array)
		return (-1);
	while (l <= hi && value >= array[l] && value <= array[hi])
	{
		pos = l + (((double)(hi - l) / (array[hi] - array[l])) * (value - array[l]));
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (value > array[pos])
			l = pos + 1;
		else
			hi = pos - 1;
	}
	pos = l + (((double)(hi - l) / (array[hi] - array[l])) * (value - array[l]));
	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}
