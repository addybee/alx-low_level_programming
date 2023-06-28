#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: pointer to a character
 * Return: the integer
 */
int _atoi(char *s)
{
	int i, sign;
	unsigned int number;

	sign = 1;
	number = 0;
	i = 0;
	for (; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
			number = (number * 10) + (s[i] - '0');
		else if (number > 0)
			break;
	}
	return (number * sign);
}
