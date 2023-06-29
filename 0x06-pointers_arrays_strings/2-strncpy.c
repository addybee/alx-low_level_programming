#include "main.h"
/**
 * _strncpy - copies a string and work like strncpy
 * @dest: pointer to a char
 * @src: pointer to a char
 * @n: a variable of type integer
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index;

	index = 0;
	while (index < n && src[index])
	{
		dest[index] = src[index];
		index++;
	}
	for (; index < n; index++)
		dest[index] = '\0';
	return (dest);
}
