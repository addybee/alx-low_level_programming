#include "main.h"
/**
 * rev_string - string is reverse
 * @s: char type pointer
 * Return: nothing
 */
void rev_string(char *s)
{
	int len, j;
	char p[10];

	len =0;
	j = 0;
	while (s[len] != '\0')
	{
		p[len] = s[len];
		len++;
	}
	
	while ((len - 1) >= 0)
	{
		s[len] = p[j];
		len--;
		j++;
	}
}
