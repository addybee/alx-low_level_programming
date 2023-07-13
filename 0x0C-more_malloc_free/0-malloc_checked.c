#include <stdlib.h>
/**
 * malloc_checked - allocates memory  using malloc
 * @b:i number of memory to be allocated
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *pp;

	pp = malloc(b);
	if (pp == NULL)
		exit(98);
	return (pp);
}
