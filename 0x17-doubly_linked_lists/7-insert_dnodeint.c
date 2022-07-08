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
	dlistint_t *newnode, *trav;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	trav = *h;
	if (idx == 0)
	{
		newnode->next = NULL;
		trav->next = newnode;
		newnode->prev = trav;
	}
	idx--;
	while (idx != 0)
	{
		trav = trav->next;
		idx--;
		if (trav == NULL)
			return (NULL);
	}
	newnode->next = trav->next;
	newnode->prev = trav;
	trav->next = newnode;
	if (newnode->next != NULL)
		(newnode->next)->prev = newnode;
	else
		newnode->next = NULL;
	return (newnode);
}
