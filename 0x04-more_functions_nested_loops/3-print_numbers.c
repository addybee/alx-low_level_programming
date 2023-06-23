#include "main.h"
/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line
 * Return: always void when successful
 */
void print_numbers(void)
{
	char digit;

	digit = '0';
	while (digit <= '9')
	{
		_putchar(digit);
		digit++;
	}
	_putchar('\n');
}
