#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog- prints members of a struct
 * @d: pointer to struct
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (!(d->name))
		printf("Name: %s\n", "nill");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if (!(d->owner))
		printf("Owner: %s\n", "nill");
	else
		printf("Owner: %s\n", d->owner);
}
