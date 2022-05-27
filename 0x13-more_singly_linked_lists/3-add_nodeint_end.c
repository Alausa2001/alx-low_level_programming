#include "lists.h"
/**
 * *add_nodeint_end - Write a function that adds
 * a new node at the end of a listint_t list
 * @head: pointer tr to the first node of the list
 * @n: data
 * Return: Return: the address of the new element
 * , or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *trav;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	trav = *head;

	if (trav == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (trav->next != NULL)
			trav = trav->next;
		trav->next = newnode;
	}
	return (*head);
}
