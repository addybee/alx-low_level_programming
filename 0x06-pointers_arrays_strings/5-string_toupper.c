#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @a: the string which its lowercase is to be changed
 * Return: return the chandged string
 */
char *string_toupper(char *a)
{
	int k;
	char i;

	k = 0;
	while (a[k])
	{
		if (a[k] >= 97 && 122 >= a[k])
		{
			i = a[k] - 32;
			a[k] = i;
		}
		k++;
	}
	return (a);
}
