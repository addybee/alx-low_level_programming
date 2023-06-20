#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 when successful
 */
int main(void)
{
	char digit;

	digit = '0';
	while (digit <= '9')
	{
		putchar(digit);
		digit++;
	}
	putchar('\n');
	return (0);
}
