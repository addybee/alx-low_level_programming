#include "main.h"
/**
 * rot13 - encodes a text using rot13
 * @s: string to be encoded
 * Return: char encoded
 */
char *rot13(char *s)
{
	int i, j;
	char F[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char G[53] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (s[i])
	{
		j = 0;
		while (j < 52)
		{
			if (s[i] == F[j])
			{
				s[i] = G[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
