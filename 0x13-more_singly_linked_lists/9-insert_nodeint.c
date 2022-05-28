#include "lists.h"
/**
 * listint_t *insert_nodeint_at_index - Write a function that
 * inserts a new node at a given position.
 * @head: it is a pointer to the head of the list
 * @n: data to be inserted in the newnode
 * @idx: the index where the node is to be inserted
 * the first node has an index equal to 0
 * Return: if successful return the newnode else return null
 * if it is impossible to add the new node do not add and
 * return null
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *trav;

	trav = *head;
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	idx--;
	while (idx != 0)
	{
		if (trav == NULL)
			return (NULL);
		trav = trav->next;
		idx--;
	}
	newnode->next = trav->next;
	trav->next = newnode;
	return (newnode);
}
