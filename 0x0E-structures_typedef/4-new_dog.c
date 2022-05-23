#include <stdio.h>
#include "dog.h"
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
	while (*s != '\0')
	{
		len++;
	}
	return (len);
}
/**
 * *_strcpy - copies the content of
 * one string to another
 * @src: original
 * @dest: copy
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int lett;

	for (lett = 0; src[lett] != '\0'; lett++)
	{
		dest[lett] = *(src + lett);
	}
	dest[lett] = '\0';
	return (dest);
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
	char *name_copy, owner_copy;
	dog_t *new_dog;

	new_dog = malloc(sizeof(struct dog));

	if (new_dog == NULL)
		return (NULL);
	name_copy = malloc(sizeof(char *) * (_strlen(name) + 1));
	if (name_copy == NULL)
	{
		free(name_copy);
		free(dog);
		return (null);
	}
	name_copy = _strcpy(name_copy, name);
	owner_copy = malloc(sizeof(char *) * (_strlen(owner) + 1));
	if (owner_copy == NULL)
	{
		free(owner_copy);
		free(name_copy);
		free(new_dog);
		return (NULL);
	}
	owner_copy = _strcpy(cowner, owner);
	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;
	return (new_dog);
}


