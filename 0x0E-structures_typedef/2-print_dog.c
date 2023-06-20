#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

void print_dog(struct dog *d)
{
	char * name;
	char * owner;

	if (d == NULL)
		printf("%s","nill");
	name = d-> name ? d-> name : "nill";
	owner = d -> owner ? d -> owner : "nill";
	printf("Name: %s\n", name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", owner);
}
