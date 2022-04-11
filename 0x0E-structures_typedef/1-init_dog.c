#include <stdlib.h>
#define "dog.h"

/**
 * init_dog - initializes variable of type struct dog
 * @d: Dog structure
 * @name: Name f the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
