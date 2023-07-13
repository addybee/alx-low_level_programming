#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of string to concat
 * Return: pointer to the newly allocated memory in space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j, k;

	i = j = 0;
	if (s1 != NULL)
	{
		while (s1[i])
			i++;
	}
	if (s2 != NULL)
	{
		while (s2[j])
			j++;
	}
	if (n >= j)
		n = j;
	k = i + n + 1;
	p = malloc(k * sizeof(*p));
	if (p == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		p[k] = s1[k];
	for (i = 0; i < n; i++)
		p[k + i] = s2[i];
	p[k + i] = '\0';
	return (p);
}
