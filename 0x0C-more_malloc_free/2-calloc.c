#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array of nmemb elements of size bytes each
 * @nmemb: the number of element present in the array
 * @size: size of memory to be allocated
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned char *pp;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	pp = (unsigned char *)p;
	for (i = 0; i < nmemb; i++)
		pp[i] = 0;
	return (p);
}
