#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - function that prints string length
 * @s: string whose length is to be returned
 * Return: string length
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*(s + len) != '\0')
	{
		len++;
	}
	return (len);
}
/**
 * new_dog - function that creates a new dog
 * @name: name of dog
 * @owner: owner of dog
 * @age: dog's age
 * Return: if malloc fails return null else return dogtype
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int name_len, owner_len, i, j;
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);
	new_dog->name = malloc(sizeof(char *) * (_strlen(name) + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	name_len = _strlen(name);
	for (i = 0; i < name_len; i++)
		new_dog->name[i] = name[i];

	new_dog->age = age;

	owner_len = _strlen(owner);
	new_dog->owner = malloc(sizeof(char *) * (_strlen(owner) + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (j = 0; j < owner_len; j++)
		new_dog->owner[i] = owner[i];
	return (new_dog);
}
