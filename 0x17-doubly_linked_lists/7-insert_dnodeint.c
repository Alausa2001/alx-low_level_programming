#include "lists.h"
/**
 * *insert_dnodeint_at_index - Write a function that
 * inserts a new node at a given position.
 * @h: it is a pointer to the head of the list
 * @n: data to be inserted in the newnode
 * @idx: the index where the node is to be inserted
 * the first node has an index equal to 0
 * Return: if successful return the newnode else return null
 * if it is impossible to add the new node do not add and
 * return null
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *next, *current;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	if (idx != 0)
	{
		current = *h;
		for (i = 0; i < idx - 1 && current != NULL; i++)
			current = current->next;
		if (current == NULL)
			return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		next = *h;
		*h = new;
		new->prev = NULL;
	}
	else
	{
		new->prev = current;
		next = current->next;
		current->next = new;
	}
	new->next = next;
	if (new->next != NULL)
		new->next->prev = new;
	return (new);
}
