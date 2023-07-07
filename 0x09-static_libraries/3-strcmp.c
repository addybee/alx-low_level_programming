#include "main.h"
/**
 * _strcmp - compares two strings.
 * @s1: pointer to a char
 * @s2: pointer to a char
 * Return: an integer
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
