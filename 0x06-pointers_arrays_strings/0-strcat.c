#include "main.h"
/**
 * _strcat - appends the src string to the dest string, overwriting
 * the terminating null byte (\0) at the end of dest, and then adds a
 * terminating null byte
 * @dest: pointer to a char
 * @src: pointer to a char
 * Return: chararacter
 */
char *_strcat(char *dest, char *src)
{
	int i;

	i = 0;
	while (dest[i])
		i++;
	while (*src)
		dest[i++] = *src++;
	dest[i] = '\0';
	return (dest);
}
