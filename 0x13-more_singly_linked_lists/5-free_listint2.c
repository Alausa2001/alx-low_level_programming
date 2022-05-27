#include "lists.h"
/**
 * free_listint2 - Write a function that frees a listint_t list
 * The function sets the head to NULL
 * @head: pointer to first node
 */
void free_listint2(listint_t **head)
{
	listint_t *repnode;

	if (*head == NULL)
		return;
	while (repnode != NULL)
	{
		repnode  = *head
		repnode = repnode->next;
		free(repnode);
	}
	*head = NULL;
}
