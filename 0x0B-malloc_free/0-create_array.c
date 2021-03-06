#include "main.h"
#include <stdlib.h>
/**
 * create_array - this function creates an array
 * @size: size of array to create
 * @c: char name
 * Return: base address if successful, else null
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);
	array = (char *)malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
