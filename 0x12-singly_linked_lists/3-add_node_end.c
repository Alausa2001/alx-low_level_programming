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
	list_t *traverse = *head;

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
		while (traverse->next != NULL)
		{
			traverse = traverse->next;
		}
		traverse->next = newnode;
	}
	return (newnode);
}
/**
 * _strlen - function that prints string length
 * @s: string
 * Return: string length
 */
int _strlen(char *s)
{
	int l;

	l = 0;
	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
