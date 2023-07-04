#include "main.h"
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: pointer to a char
 * @src: pointer to character source
 * @n: number of terms to be copied
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i, t;

	t = n;
	for (i = 0; i < t; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
