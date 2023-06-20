#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 when successful
 */
int main(void)
{
	char hex_n;

	hex_n = '0';
	while (hex_n <= '9')
	{
		putchar(hex_n);
		hex_n++;
	}
	for ( hex_n = 'a'; hex_n < 'g'; hex_n++)
	{
		putchar(hex_n);
	}
	putchar('\n');
	return (0);
}
