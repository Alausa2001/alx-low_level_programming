#include <stdio.h>
#include "search_algos.h"

/**
 * print - print the element in the array/subarray to be searched
 * @array: array/subarray to be printed
 * @start: lowerbound of the array/subarray
 * @finish: upperbound of the array/subarray
 * Return: void
 */
void print(int *array, size_t start, size_t finish)
{
	printf("Searching in array: ");
	for (; start < finish ; start++)
	{
		printf("%d, ", array[start]);
	}
	printf("%d\n", array[finish]);
}

/**
 * binary_search - searches for a value in a sorted array using binary
 * search technique
 * @size: size of the array
 * @array: pointer to the first element of the array
 * @value: what is being searched for
 * Return: If found return the index of the element being searched
 * else return -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid, low = 0, high = size - 1;

	if (!array || high < low)
		return (-1);
	while (low <= high)
	{
		print(array, low, high);
		mid = low + (high - low) / 2;
		if (value > array[mid])
			low = mid + 1;
		else if (value < array[mid])
			high = mid - 1;
		if (value == array[mid])
			return (mid);
	}
	return (-1);
}
