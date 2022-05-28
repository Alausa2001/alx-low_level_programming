#include "lists.h"
/**
 * pop_listint - Write a function that deletes the head node
 * of a listint_t linked list, and returns the head node’s data
 * @head: it is a pointer to the head of the list
 * Return: the data of the new firs node
 */
int pop_listint(listint_t **head)
{
	listint_t *del;
	int data;
	
	if (*head == NULL)
		return (0);
	del = *head;
	data = del->n
	*head = (*head)->next;
	del->n = NULL;
	free(del);

	return (data);
}
