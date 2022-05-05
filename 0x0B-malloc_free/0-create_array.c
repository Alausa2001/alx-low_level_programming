#include "main.h"
#include <stdlib.h>
/**
 * create_array - this function creates an array
 * @size: size of array to create
 * @c: array name
 * Return: base address if successful, else null
 */
char *create_array(unsigned int size, char c)
{
	if (size != 0)
	{
		char *c = (char)malloc(size * sizeof(char));
	return (c);
	}
	else if (size == 0)
		return (NULL);
}
