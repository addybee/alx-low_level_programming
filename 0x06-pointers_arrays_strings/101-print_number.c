#include "main.h"
/**
 * print_number - prints an integer
 * @n: the integer to be printed
 * Return: nothing
 */
void print_number(int n)
{
	int i, digit, div, t;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	t = n;
	digit = 1;
	if 
	while (t /= 10)
		digit++;
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	for (; digit > 0; digit--)
	{
		div = 1;
		for (i = 1; i < digit; i++)
			div *= 10;
		_putchar('0' + n / div);
		n %= div;
	}
}
