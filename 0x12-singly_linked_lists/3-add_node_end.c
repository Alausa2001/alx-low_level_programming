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

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = strlen(str);
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


/**
 * strlen - finds the length of a string.
 * Return: length of string
 * @ptr: poniter to string
 */
int strlen(const char *ptr)
{
	int count = 0;

	while (*(ptr + count) != '\0')
	{
		count++;
	}
	return (count);
}