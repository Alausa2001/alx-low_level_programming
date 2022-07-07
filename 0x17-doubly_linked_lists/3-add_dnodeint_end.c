#include "lists.h"
/**
 * *add_dnodeint_end -  function that adds a new node
 *  at the end of a dlistint_t list.
 * @head: pointer to pointer to the first node of the list
 * @n: data in the newnode
 * Return: return the last node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *move;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	move = *head;
	if (move == NULL)
	{
		newnode->n = n;
		newnode->next = NULL;
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}
	else
	{
		while (move->next != NULL)
			move = move->next;
		move->next = newnode;
		newnode->n = n;
		newnode->next = NULL;
		newnode->prev = move;
	}
	return (newnode);
}
