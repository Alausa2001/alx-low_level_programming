#include "lists.h"
/**
 * listint_t *insert_nodeint_at_index - Write a function that
 * inserts a new node at a given position.
 * @head: it is a pointer to the head of the list
 * Return: if successful return the newnode else return null
 * if it is impossible to add the new node do not add and
 * return null
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;
	listint_t *trav;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;
	idx--;
	while (idx != 0)
	{
		trav = trav->next;
		idx--;
	}
	newnode->next = trav->next;
	trav->next = newnode;
	if (idx == 0)
	{
		newnode->next = trav->link;
		*head = newnode;
	}
	return (newnode);
