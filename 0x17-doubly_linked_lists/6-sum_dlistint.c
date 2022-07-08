#include "lists.h"
/**
 * sum_dlistint - this function returns the sum of
 * the data in a linked list
 * @head: points to the first node of the list
 * Return: the sum of the data in the list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *trav;
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
