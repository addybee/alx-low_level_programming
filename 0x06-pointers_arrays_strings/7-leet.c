#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: string to be encoded
 * Return: char encoded
 */
char *leet(char *s)
{
	int i, j;
	char salp[6] = "AEOTL";
	char num[5] = "43071";

	i = 0;
	while (s[i])
	{
		j = 0;
		while (j < 5)
		{
			if (s[i] == salp[j] || s[i] == (salp[j] - 65 + 97))
			{
				s[i] = num[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
