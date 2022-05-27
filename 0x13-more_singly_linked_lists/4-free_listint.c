#include "lists.h"
/**
 * free_listint - Write a function that frees a listint_t list
 * @head: first node
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *trav;

	while (head != NULL)
	{
		trav = head->next;
		free(head->n);
		free(head);
		head = trav;
	}
}
