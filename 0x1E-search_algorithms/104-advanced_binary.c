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
 * binary_recursion - recursive binary search
 * @array: array to search
 * @mid: middle index
 * @start: array's lower bound
 * @end: array's upper bound
 * @value: value being sought
 * Return: index of element
 */
size_t binary_recursion(int *array, size_t mid,
		size_t start, size_t end, int value)
{
	if (!array || end < start)
		return (-1);
	print(array, start, end);
	mid = start + (end - start) / 2;
	if (value == array[mid])
		return (mid);
	if (value > array[mid])
		return (binary_recursion(array, mid, mid + 1, end, value));
	if (value < array[mid])
		return (binary_recursion(array, mid, start, mid - 1, value));
	return (mid);
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
int advanced_binary(int *array, size_t size, int value)
{
	size_t mid = 0, low = 0, high = size - 1;
	int ans;

	ans = binary_recursion(array, mid, low, high, value);
	return (ans);
}
