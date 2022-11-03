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
 * binarysearch - searches for a value in a sorted array using binary
 * search technique
 * @low: lower bound of the array
 * @high: uppar bound of the array
 * @array: pointer to the first element of the array
 * @value: what is being searched for
 * Return: If found return the index of the element being searched
 * else return -1
 */
int binarysearch(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	if (!array || high < low)
		return (-1);
	printf("Value found between indexes [%ld] and [%ld]\n", low, high);
	while (low <= high)
	{
		print(array, low, high);
		mid = low + (high - low) / 2;
		if (value == array[mid])
			return (mid);
		if (value > array[mid])
			low = mid + 1;
		else if (value < array[mid])
			high = mid - 1;
	}
	return (-1);
}

/**
 * min - return the minimum between two integers (motive is to control the
 * number of computations in the exponential search)
 * @a: first integer
 * @b: second integer
 * Return: the smallest integer
 */
size_t min(size_t a, size_t b)
{
	if (a > b)
		return (b);
	return (a);
}
/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @value: the value being sought
 * Return: If found return the index of the element being searched
 * else returns -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;

	if (!array)
		return (-1);
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	return (binarysearch(array, bound / 2, min(bound, size - 1), value));
}
