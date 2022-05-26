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
	list_t *newnode, *traverse;
	size_t count = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	for (; str[count]; count++)
		;
	newnode->len = count;
	newnode->next = NULL;
	traverse = *head;

	if (traverse == NULL)
		*head = newnode;
	else
	{
		while (traverse->next != NULL)
		{
			traverse = traverse->next;
		}
		traverse->next = newnode;
	}
	return (*head);
}
