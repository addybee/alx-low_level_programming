#include "main.h"
/**
 * _strcpy - copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest
 * @dest: char type poiter
 * @src: char type pointer
 * Return: char type pointer
 */
char *_strcpy(char *dest, char *src)
{
	char *pt_dest = dest;

	while (*src != '\0')
	{
		*pt_dest = *src;
		pt_dest++;
		src++;
	}
	*pt_dest = '\0';
	return (dest);
}
