#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to a struct dog type
 * @name: pointer to character
 * @age: variable foe the dogs age
 * @owner: pointer to a character
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d && name && owner)
	{
		(*d).name = name;
		d->age = age;
		d->owner = owner;
	}
}
