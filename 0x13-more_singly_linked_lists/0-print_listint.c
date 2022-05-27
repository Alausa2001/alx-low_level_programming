#include "lists.h"
/**
 * print_listint - Write a function that prints all the
 * Write a function that prints all the elements of a listint_t list
 * @h: pointer to the starting node
 * @trav: pointer used to traverse the list
 * Return: the no of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint *trav;
	int count;

	trav = head;
	while (trav != NULL)
	{
		printf("%d\n", trav->n);
		trav = trav->next;
		count++;
	}
	return (count);
}
