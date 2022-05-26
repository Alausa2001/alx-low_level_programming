#include <string.h>
#include <stdio.h>
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
	list_t *newnode;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = _strlen(str);
	newnode->next = NULL;

	if (*head == NULL)
		*head = newnode;
	else
	{
		list_t *traverse = *head;

		while (traverse->next != NULL)
		{
			traverse = traverse->next;
		}
		traverse->next = newnode;
	}
	return (newnode);
}
/**
 * _strlen - finds the length of a string.
 * Return: length of string
 * @ptr: poniter to string
 */
int _strlen(const char *ptr)
{
	int count = 0;

	while (*(ptr + count) != '\0')
	{
		count++;
	}
	return (count);
}
