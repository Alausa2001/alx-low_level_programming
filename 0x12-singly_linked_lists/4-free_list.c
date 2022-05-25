#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: pointer to list_t.
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *access;

	while (head != NULL)
	{
		access = head->next;
		free(head->str);
		free(head);
		head = access;
	}
}
