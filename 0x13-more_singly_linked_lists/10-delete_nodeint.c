#include "lists.h"
/**
 * delete_nodeint_at_index - Write a function that deletes the
 * node at index index of a listint_t linked list
 * @head: pointer to the head
 * @index: position of node to delete, index starts from 0
 * Return: 1 if successful else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *trav, *del = *head;

	if (*head == NULL)
		return (-1);
	else if (index == 0)
	{
		*head = del->next;
		free(del);
		del = NULL;
		return (1);
	}
	while (index != 0)
	{
		trav = del;
		del = del->next;
		index--;
	}
	trav->next = del->next;
	free(del);
	del = NULL;
	return (1);
	if (index != 0 && traV == NULL)
		return (-1);
}
