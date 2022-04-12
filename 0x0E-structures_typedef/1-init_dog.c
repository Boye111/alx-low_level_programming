#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - atrributes of dog
 * @d: ........
 * @name: name of dog
 * @age: age
 * @owner: owner
 * Return: none
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
