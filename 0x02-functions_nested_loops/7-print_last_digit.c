#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @l: stores the number of type int which is to be pass into the function
 * Return: always the last digit
 */
int print_last_digit(int l)
{
	int  n = l % 10;

	if (n < 0)
	{
		n = -n;
		_putchar('0' + n);
		return (n);
	}
	else
	{
		_putchar('0' + n);
		return (n);
	}
}
