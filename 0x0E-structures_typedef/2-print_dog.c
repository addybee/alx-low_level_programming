#include <stdio.h>
#include "dog.h"
/**
 * print_dog -  prints a struct dog
 * @d: pointer to a struct dog
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d.name && d.age && d.owner)
		{
			printf("Name: %s\n", d->name);
			printf("Age: %f\n", d->age);
			printf("Owner: %s\n", d->owner);
		}
	}
}
