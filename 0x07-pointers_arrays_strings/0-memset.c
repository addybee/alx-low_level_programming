#include "main.h"
/**
 * _memset - fills the first n bytes of the memory area pointed to by s with
 * the constant byte b
 * @s: pointer to a character
 * @b: const byte
 * @n: number of byte to be fill
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i, t;

	t = n;
	for (i = 0; i < t; i++)
	{
		s[i] = b;
	}
	return (s);
}
