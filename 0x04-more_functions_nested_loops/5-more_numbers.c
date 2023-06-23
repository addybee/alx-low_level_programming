#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14, followed by a new
 * line.
 * Return: always void when successful
 */
void more_numbers(void)
{
	int t, digit;

	for (t = 0; t < 10; t++)
	{
		digit = 0;
		while (digit <= 14)
		{
			if ((digit / 10) != 0)
				_putchar((digit / 10) + '0');
			_putchar((digit % 10) + '0');
			digit++;
		}
		_putchar('\n');
	}
}
