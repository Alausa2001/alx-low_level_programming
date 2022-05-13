#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - function that creates a new dog.
 * @name: name of dog
 * @owner: owner of dog
 * @age: dog's age
 * Return: if malloc fails return null else return dogtype
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	int nowner, nname, i;

	newdog = malloc(sizeof(newdog));
	if (newdog == NULL)
	{
		free(newdog);
		return (NULL);
	}
	else
	{
		for (nowner = 0; owner[nowner] != '\0'; nowner++)
			;
		for (nname = 0; name[nname] != '\0'; nname++)
			;
		for (i = 0; i < nname; i++)
			name[i] = name[nname];
		for (i = 0; i < nowner; i++)
			owner[i] = owner[nowner];
		return (newdog);
}
