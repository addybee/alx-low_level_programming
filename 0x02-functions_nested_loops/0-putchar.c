#include "main.h"
/**
 * main - entry point
 *
 * Return: 0 (zero) when successful
 */
int main(void)
{
	int i;

	/* assigning  variable */
	char msg[8] = "_putchar";
	/* iterate through msg and print out each character */
	for (i = 0; i < 8; i++)
	{
		_putchar(msg[i]);
	}
	_putchar('\n');
	return (0);
}
