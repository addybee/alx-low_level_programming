#include "main.h"
/**
 * print_alphabet_x10 - prints lowercase alphabet 10 times
 *
 * Return void when successful
 */
void print_alphabet_x10(void)
{
	char i, j;

	for (i = 0; i < 10; i++)
	{
		j = 'a';
		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
	}
}
