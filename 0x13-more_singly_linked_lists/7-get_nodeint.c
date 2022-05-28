#include "lists.h"
/**
 * *get_nodeint_at_index
 * @head: the pointer to the first node
 * @index: the index if the node to be returned
 * index start from 0
 * Return: the node at nth index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *trav = head;

	if (index == 0)
		return (trav->n);
	index--;
	while (index != 0)
	{
		trav = trav->next;
		index--;
	}
	return (trav->n);
}
