#include "main.h"
unsigned int validate_input_bin(const char *b);
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars.
 * Return: the converted number.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int len;

	num = 0;
	if (b == NULL)
		return (0);
	len = (int)validate_input_bin(b);
	if (!len || sizeof(*b) > sizeof(num))
		return (num);
	/* Convert the binary string to an unsigned integer */
	len--;
	while (len >= 0)
	{
		num += (*b - '0') << len;
		b++;
		len--;
	}
	return (num);
}

/**
* validate_input_bin - check if there is one or more chars in the string b that
* is not 0 or 1.
* @b: is pointing to a string.
* Return: length of string if successful and 0 for failure
*/
unsigned int validate_input_bin(const char *b)
{
	unsigned int i = 0;

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	return (i);
}
