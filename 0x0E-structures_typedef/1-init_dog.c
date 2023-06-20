#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - a function that initializes a struct
 * @d: pointer to a struct
 * @name: name variable
 * @age: age variable
 * @owner: owner variable
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
