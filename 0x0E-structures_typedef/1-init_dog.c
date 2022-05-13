#include "dog.h"
/**
 * init_dog - function intiailzes the dog info
 * @d: pointer to a dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->owner = owner;
	d->name = name;
	d->age = age;
}
