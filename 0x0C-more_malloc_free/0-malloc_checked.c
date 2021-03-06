#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory, if  the malloc fails
 * the malloc_checked function should cause normal
 * process termination with a status value of 98
 * @b: the size of memory to be allocated
 * Return: malloc return pointer
 */
void *malloc_checked(unsigned int b)
{
	char *memory;

	memory = malloc(b);

	if (memory == NULL)
		exit(98);
	return (memory);
}
