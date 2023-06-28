#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: char type pointer
 * Return: nothing
 */
void print_rev(char *s)
{
	int len;

	len = 0;
	while (s[len])
		len++;
	while (len >= 0)
		_putchar(s[--len]);
	_putchar('\n');
}
