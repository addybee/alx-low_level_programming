#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: return 0 when successful
 */
int main(void)
{
	char xracter;

	xracter = 'a';
	while (xracter <= 'z')
	{
		putchar(xracter);
		xracter++;
	}
	xracter = 'A';
	while (xracter <= 'Z')
	{
		putchar(xracter);
		xracter++;
	}
	putchar('\n');
	return (0);
}
