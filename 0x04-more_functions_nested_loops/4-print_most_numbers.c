#include "main.h"
/**
 * print_most_numbers -  prints the numbers, from 0 to 9, followed by a new lin
 * e but do not print 2 and 4
 * Return: always void when successful
 */
void print_most_numbers(void)
{
	char digit;

	digit = '0';
	while (digit <= '9')
	{
		if (digit == '2' || digit == '4')
		{
			digit++;
			continue;
		}
		_putchar(digit);
		digit++;
	}
	_putchar('\n');
}
