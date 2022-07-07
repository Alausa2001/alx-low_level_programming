#include "lists.h"
/**
 * free_dlistint - This function  frees a dlistint_t list.
 * @head: the pointer to the first node
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *trav;

	while (head != NULL)
	{
		trav = head->next;
		free(head);
		head = trav;
	}
}
