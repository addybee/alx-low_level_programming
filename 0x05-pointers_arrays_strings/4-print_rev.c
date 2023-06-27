#include "main.h"
/**
 * _print_rev - prints a string, in reverse, followed by a new line
 * @s: char type pointer
 * Return: nothing
 */
void print_rev(char *s)
{
	int len;

	len = 0; while (s[len] != '\0')
	{
		len++;
	}
	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
