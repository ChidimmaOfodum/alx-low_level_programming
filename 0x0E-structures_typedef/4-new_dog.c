#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of dog
 * @owner: dog owner
 * Return: struct pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	char *nameCpy = malloc(strlen(name) + 1);
	char *ownerCpy = malloc(strlen(owner) + 1);

	my_dog = malloc(sizeof(dog_t));
	strcpy(nameCpy, name);
	strcpy(ownerCpy, owner);
	if (!my_dog)
	{
		return (NULL);
		free(my_dog);
		free(nameCpy);
		free(ownerCpy);
	}
	my_dog->name = nameCpy;
	my_dog->age = age;
	my_dog->owner = ownerCpy;

	return (my_dog);
}
