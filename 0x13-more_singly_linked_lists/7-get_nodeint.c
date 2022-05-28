#include "lists.h"
/**
 * *get_nodeint_at_index - Write a function that returns
 * the nth node of a listint_t linked list.
 * @head: the pointer to the first node
 * @index: the index if the node to be returned
 * index start from 0
 * Return: the node at nth index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *trav = head;

	if (index == 0)
		return (trav);
	while (index != 0)
	{
		trav = trav->next;
		index--;
		if (trav == NULL)
			return (NULL);
	}
	return (trav);
}
