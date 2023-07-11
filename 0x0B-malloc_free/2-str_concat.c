#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates two strings.
 * @s1: string to be concatenated to
 * @s2:string to be concat
 * Return: Null when failed and new string when success
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *p;

	for (i = 0; s1[i]; i++)
		;
	i--;
	for (j = 0; s2[j]; j++)
		;
	j--;
	p = malloc((i + j) * sizeof(char));
	if (p == NULL)
		return (p);
	for (k = 0; k < i; k++)
		p[k] = s1[k];
	for (i = 0; i < j; i++)
	{
		p[k] = s2[i];
		k++;
	}
	return (p);
}
