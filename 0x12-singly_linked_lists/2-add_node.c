#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * *add_node - Write a function that adds a new node at the beginning of a
 * list_t list
 * @head: pointer to the first node of the list
 * @str: string to duplicate
 * Return: pointer to the fisrt node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	size_t count;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	for (count = 0; str[count]; count++)
		;
	newnode->len = count;
	newnode->next = *head;
	*head = newnode;
	return (*head);
}
