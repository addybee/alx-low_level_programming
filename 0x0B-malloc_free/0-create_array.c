#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates array of chars, and initializes it with specific char
 * @size: size of the array
 * @c: character to be in the array
 * Return: pointer to an array
 */
char *create_array(unsigned int size, char c)
{
	char *pp;
	unsigned int i;

	pp = malloc((size + 1) * sizeof(*pp));
	if (pp == NULL)
		return (pp);
	i = 0;
	while (i < size)
	{
		pp[i] = c;
		i++;
	}
	pp[i] = '\0';
	return (pp);
}
