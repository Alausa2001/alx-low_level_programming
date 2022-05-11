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
	unsigned int i;

	if (min > max)
		return (NULL);
	p = malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < (max - min))
	{
		p[i] = min + i;
		i++;
	}
	p[i] = max;
	return (p);
}
