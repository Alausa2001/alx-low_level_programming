#include "lists.h"
/**
 * dlistint_len - This func. returns the no of nodes in a doubly linked
 * list
 * @h: points to the first node of the list
 * Return: the no of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *access = h;
	int count = 0;

	while (access != NULL)
	{
		access = access->next;
		count++;
	}
	return (count);
}
