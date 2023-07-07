#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: pointer to the string
 * @accept: pointer to a character
 * Return: the number of bytes in the initial segment of s which consist only
 * of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int n, i;
	unsigned int counter;

	counter = 0;
	for (i = 0; s[i]; i++)
	{
		n = 0;
		for (; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
			{
				counter++;
				break;
			}
		}
		if (s[i] != accept[n])
			break;
	}
	return (counter);
}
