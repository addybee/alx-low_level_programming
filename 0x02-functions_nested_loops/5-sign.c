#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: store the number whose sign is to be printed
 * Return: 1 for +ve, 0 for zero and -1 for -ve
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
