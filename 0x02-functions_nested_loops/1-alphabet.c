#include "main.h"
/**
 * print_alphabet - print alphabet in lowercase
 *
 * return: void when successful
 */
void print_alphabet(void)
{
	char i = 'a';

	while  (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
