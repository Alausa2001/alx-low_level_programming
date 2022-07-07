#include "lists.h"
/**
 * *get_dnodeint_at_index - this functin return the node at the specified
 * index
 * @head: points to the first node of the list
 * @index: positiin of node to be returned
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *trav = head;

	if (head == NULL)
		return (NULL);
	else if (index == 0)
		return (trav);
	while (index != 0)
	{
		trav = trav->next;
		index--;
	}
	return (trav);
}
