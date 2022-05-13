#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - struct store some info about dogs
 * @name: name of dog
 * @age: dog's age
 * @owner: dog owner
 *
 * Description: struct dog saves certain info
 * about the name age and owner of dogs
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
typedef struct dog dog_t;
#endif
