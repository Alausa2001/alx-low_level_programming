#include "lists.h"
/**
 * listint_len - Write a function that
 * returns the number of elements in a linked listint_t list.
 * @h: pointer to the starting node
 * Return: the no of nodes
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *trav = h;
	int count;

	count = 0;
	while (trav != NULL)
	{
		trav = trav->n;
		count++;
	}
	return (count);
}
