#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a new string which is a duplicate of the
 * string str. Memory for the new string is obtained with malloc, and freed
 * @str: string to be copied
 * Return: a pointer to the new str
 */
char *_strdup(char *str)
{
	int i, j;
	char *p;

	if (str == "")
		return (NULL);
	i = j = 0;
	while (str[i])
		i++;
	p = malloc(i * sizeof(char));
	if (p == NULL)
		return (p);
	while (j < i)
	{
		p[j] = str[j];
		j++;
	}
	return (p);
}
