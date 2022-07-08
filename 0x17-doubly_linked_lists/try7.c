#include "lists.h"
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *trav;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	trav = *h;
	if (idx == 0)
	{
		new->next = NULL;
		trav->next = new;
		new->prev = trav;
	}
	idx--;
	while (idx != 0)
	{
		trav = trav->next;
		idx--;
		if (trav == NULL)
		       return (NULL);	
	}
	new->next = trav->next;
	new->prev = trav;
	trav->next = new;
	(new->next)->prev = new;
	return (new);
}
