#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - allocates memory  using malloc
 * @b:i number of memory to be allocated
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *pp;

	pp = malloc(b);
	if (pp == NULL){
		printf("this NULL case");
		exit(98);}
	return (pp);
}
