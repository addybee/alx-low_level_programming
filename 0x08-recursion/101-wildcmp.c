#include "main.h"
/**
 * wildcmp -  compares two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return: 1 if the strings can be considered identical, otherwise return 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 || *s2)
	{
		if (*s1 != *s2)
			return (0);
	}
	return (1 * wildcmp(s1 + 1,  s2 + 1));
}
