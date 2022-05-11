#include "main.h"
#include <stdlib.h>
/**
 * array_range - Write a function that creates an array of integers
 * @max: maximum value
 * @min: minimum value
 * Return: null if malloc fails else return pointer to nemarray
 */
int *array_range(int min, int max)
{
	int *p;
	int i, arr_ran;


	if (min > max)
		return (NULL);
	arr_ran = (max - min) + 1;
	p = malloc(sizeof(int) * arr_ran);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < arr_ran; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
