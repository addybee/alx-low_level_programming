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
		if (d->name && ->age && d->owner)
		{
			printf("Name: %s\n", d->name);
			printf("Age: %f\n", d->age);
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("Name: (nil)\n",nil);
                        printf("Age: %f\n", d->age);
                        printf("Owner: (nil)\n");
		}
	}
}
