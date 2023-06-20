#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 when successful
 */
int main(void)
{
	int digit;

	digit = 0;
	while (digit < 10)
	{
		if (digit == 0)
		{
			putchar('0');
			digit++;
		}
		else
		{
			putchar('0' +( digit % 10));
			digit++;
		}
	
	}
	putchar('\n');
	return (0);
}
