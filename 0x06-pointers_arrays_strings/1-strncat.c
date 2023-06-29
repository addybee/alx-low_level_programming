#include "main.h"
/**
 * _strncat - appends n bytes from src string to the dest string, overwriting
 * the terminating null byte (\0) at the end of dest, and then adds a
 * terminating null byte
 * @dest: pointer to a char
 * @src: pointer to a char
 * @n: pointer to an integer
 * Return: character
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (n > j)
	{
		dest[i++] = src[j];
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
