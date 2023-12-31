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

	i = j = 0;
	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	p = malloc((i + 1) * sizeof(char));
	if (p == NULL)
		return (p);
	while (j < i)
	{
		p[j] = str[j];
		j++;
	}
	p[j] = '\0';
	return (p);
}
