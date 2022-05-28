#include "lists.h"
/**
 * sum_listint - Write a function that returns the sum of all the
 * data (n) of a listint_t linked list
 * @head: head of list
 * Return: 0 if list is empty else return sum-total
 */
int sum_listint(listint_t *head)
{
	listint_t *trav;
	int sum = 0;

	if (head == NULL)
		return (0);
	trav = head;
	while (trav != NULL)
	{
		sum = sum + trav->n;
		trav = trav->next;
	}
	return (sum);
}
