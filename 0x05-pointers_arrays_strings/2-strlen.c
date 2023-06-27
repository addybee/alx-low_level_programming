#include "main.h"
/**
 * _strlen - return the length of a string
 * @s: pointer variable of char type
 * Return: length of string
 */
int _strlen(char *s)
{
	int counter, i;

	i = 0;
	counter = 0;
	while (s[i] != '\0')
	{
		counter++;
		i++;
	}
	return (counter);
}
