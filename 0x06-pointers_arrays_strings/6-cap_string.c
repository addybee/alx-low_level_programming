#include <stdio.h>
#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @s: pointer to the string to be capitalize
 * Return: capitalized character
 */
char *cap_string(char *s)
{
	int i, j, sign;
	char k;
	char sep[14] = ",;.!?(){}\n\t\" ";

	i = 0;
	sign = 1;
	while (s[i])
	{
		j = 0;
		while (sep[j])
		{
			if (sep[j] == s[i])
				sign = 1;
			j++;
		}
		if (sign)
		{
			if (s[i] > 96 && 123 > s[i])
			{
				k = s[i] - 32;
				s[i] = k;
				sign = 0;
			}
			else if (s[i] > 64 && 91 > s[i])
				sign = 0;
			else if (s[i] > 47 && s[i] < 48)
				sign = 0;
		}
		i++;
	}
	return (s);
}
