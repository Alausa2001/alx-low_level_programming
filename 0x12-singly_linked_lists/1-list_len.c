#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - prints all elements of a list_t list.
 * @h: pointer to struct list_t
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	const list_t *access = h;
	int count = 0;

	while (access != NULL)
	{
		count++;
		access = access->next;
	}
	return (count);
}
