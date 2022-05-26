#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * *add_node_end - adds a new node at the end of a linked list.
 * @head: pointer to the first node.
 * @str: string.
 * Return: the address of the new element,or null if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *trav;
	size_t count;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	for (count = 0; str[count]; count++)
		;
	newnode->len = count;
	newnode->next = NULL;
	trav = *head;

	if (trav == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (trav->next != NULL)
			trav = trav->next;
		trav->next = newnode;
	}
	return (*head);
}
