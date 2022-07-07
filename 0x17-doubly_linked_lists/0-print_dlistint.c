#include "lists.h"
/**
 * print_dlistint - This func. prints the data in a doubly linked
 * list
 * @h: points to the first node of the list
 * Return: the no of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *access = h;
	int count = 0;

	while (access != NULL)
	{
		printf("%d\n", access->n);
		access = access->next;
		count++;
	}
	return (count);
}
