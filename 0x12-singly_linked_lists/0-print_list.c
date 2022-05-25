#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - prints all elements of a list_t list.
 * @h: pointer to struct list_t.
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *access = h;
	int count = 0;

	while (access != NULL)
	{
		if (access->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
			printf("[%d] %s\n", access->len, access->str);
		count++;
		access = access->next;
	}
	return (count);
}
