#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 when successful
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < '10'; digit++)
	{
		putchar(digit);
	}
	putchar('\n');
	return (0);
}
