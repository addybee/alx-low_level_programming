#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates two strings.
 * @s1: string to be concatenated to
 * @s2: string to be concat
 * Return: Null when failed and new string when success
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *p;

	if (s1 == NULL || s2 == NULL)
	{
		for (i = 0; s1[i]; i++)
			;
		for (j = 0; s2[j]; j++)
			;
	}
	p = malloc((i + j + 1) * sizeof(char));
	if (p == NULL)
		return (p);
	for (k = 0; k < i; k++)
		p[k] = s1[k];
	for (i = 0; i <= j; i++)
		p[k + i] = s2[i];
	return (p);
}
