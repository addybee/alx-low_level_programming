#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog.
 * @name: pointer to the dogs name
 * @age: pointer to the dogs age
 * @owner: pointer to the owner of the dog
 * Return: pointer to dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pp;

	pp = malloc(sizeof(*pp));
	if (pp == NULL)
		return (NULL);
	pp->name = name;
	pp->age = age;
	pp->owner = owner;
	return (pp);
}
