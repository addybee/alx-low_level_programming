#include "main.h"
/**
 * _isdigit - check for digits
 * @c: integer c
 * Return: 1 when true and o0 when false
 */
int _isdigit(int c)
{
	char i;
/*	char di[12] = "0123456789";*/

	for (i = '0'; i <= '9'; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
