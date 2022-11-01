#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - searches a sorted arry using jump_search
 * @array: the array to search
 * @size: the number of element in the array
 * @value: the value to search for
 * Return: If found, it returns the index of the value being searched
 * else returns -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size);
	size_t start = 0, end = jump;

	printf("Value checked array[%ld] = [%d]\n", start, array[start]);
	while (array[end] < value && end < size)
	{
		printf("Value checked array[%ld] = [%d]\n", end, array[end]);
		start = end;
		end += jump;
	}
	/**printf(Value checked array[%ld] = [%d]\n, start, array[start]);**/
	printf("Value found between indexes [%ld] and [%ld]\n", start, end);
	for (; start < end + 1 && start < size; start++)
	{
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
		if (array[start] == value)
		{
			return (start);
		}
	}
	return (-1);
}
