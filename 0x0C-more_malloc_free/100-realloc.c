#include <stdlib.h>
/**
 * _realloc -  reallocates a memory block using malloc and free
 * @ptr: is a pointer to the memory previously allocated with a call to malloc
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 * Return: pointer to the realloc memoery
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i, k;
	char *pp;

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size == new_size)
		return (ptr);
	if (new_size > old_size)
		k = old_size;
	if (new_size < old_size)
		k = new_size;
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (ptr == NULL)
	{
		free(ptr);
		return (p);
	}
	pp = ptr;
	for (i = 0; i < k; i++)
		p[i] = pp[i];
	free(ptr);
	return (p);
}
