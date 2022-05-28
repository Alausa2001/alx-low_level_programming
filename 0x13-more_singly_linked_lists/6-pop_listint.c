#include "lists.h"
/**
 * pop_listint - Write a function that deletes the head node
 * of a listint_t linked list, and returns the head node’s data
 * @head: it is a pointer to the head of the list
 * Return: the data of the new firs node
 */
int pop_listint(listint_t **head)
{
	listint_t *del = *head;

	del = malloc(sizeof(listint_t));
	if (del == NULL)
	{
		free(del);
		return (NULL);
	}
	*head = (*head)->next;
	free(del);
	return ((*head)->n);
}
