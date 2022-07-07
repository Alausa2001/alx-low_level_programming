#include "lists.h"
/**
 * *add_dnodeint - this function adds a new node to the beginning of a doubly
 * linked list
 * @head: pointer to pointer to the first node of the list
 * @n: data in the nodes
 * Return:first node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (newnode);
	newnode->prev = NULL;
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	if (newnode->next != NULL)
		(newnode->next)->prev = newnode;
	return (newnode);
}
