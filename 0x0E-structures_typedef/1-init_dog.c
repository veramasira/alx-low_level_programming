#include "dog.h"
/**
 * init_dog - a function that initialzes a variables of type struct dog
 * @d: the pointer to struct dog
 * @name: name to be initialized
 * @age: the age to be initialized
 * @owner: the owner to be initialized
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->name = age;
	d->name = owner;
}
