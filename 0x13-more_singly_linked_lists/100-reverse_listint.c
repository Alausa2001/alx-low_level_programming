#include "lists.h"
/**
 * *reverse_listint - reverse a singly linked list
 * @head: pointer to the head of the list
 * Return: pointer to the firstnode of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *bhead;
	listint_t *ahead;

	bhead = NULL;
	ahead = NULL;

	while (*head != NULL)
	{
		ahead = (*head)->next;
		(*head)->next = bhead;
		bhead = *head;
		*head = ahead;
	}
	*head = bhead;
	return (*head);
}
