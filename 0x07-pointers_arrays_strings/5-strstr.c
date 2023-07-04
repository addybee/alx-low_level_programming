#include "main.h"
/**
 * _strstr - function finds the first occurrence of the substring needle in the
 * string haystack.
 * @haystack: pointer to characters
 * @needle: pointer to characters
 * Return:  a pointer to the beginning of the located substring, or NULL if the
 * substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int n = 0;

	while (needle[n])
		n++;
	while (*haystack)
	{
		i = 0;

		while (needle[i] != '\0' && haystack[i] == needle[i])
			i++;
		if (i == n)
			return (haystack);
		haystack++;
	}
	return ('\0');
}
