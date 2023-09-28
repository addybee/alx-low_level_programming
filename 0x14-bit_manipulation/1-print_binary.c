#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: number to be converted to binary.
 */
void print_binary(unsigned long int n)
{
	int sig, mask, i;

	mask = 1;
	i = (sizeof(n) * 8) - 1;
	sig = 0;
	if (!n)
	{
		_putchar('0');
		return;
	}
	while (i >= 0)
	{
		if (((n >> i) & mask) == 1)
			sig = 1;
		if (sig)
			_putchar(((n >> i) & mask) + '0');
		i--;
	}
}
