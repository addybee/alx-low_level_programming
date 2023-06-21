#include "main.h"
/**
 * jack_bauer - this prints every minute of the day starting from 00:00 - 23:59
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar('0' + (i / 10));
			_putchar('0' + (i % 10));
			_putchar(58);
			_putchar('0' + (j / 10));
			_putchar('0' + (j % 10));
			_putchar('\n');
		}
	}
}
