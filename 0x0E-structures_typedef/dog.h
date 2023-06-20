#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Describes a dog
 * @name: First member
 * @age: Second member
 * @owner: Owner
 * @type: Dog type
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
	char *type;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
