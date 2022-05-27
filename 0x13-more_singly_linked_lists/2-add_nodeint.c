#include "lists.h"
/**
 * *add_nodeint - Write a function that adds a new node at the
 * beginning of a listint_t list.
 * @head: pointer to poniter to the first node of the list
 * @n: data in the nodes
 * Return: pointer to the fisrt node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (*head);
}
