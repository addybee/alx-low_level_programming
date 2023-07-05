#include "main.h"
/**
 * _print_rev_recursion -  prints a string in reverse
 * @s: pointer to a character
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*(s + (sizeof(s) - 1)) == '\0')
	{
		return ;
	}
	_putchar(*(s + (sizeof(s) - 1)));
	_puts_recursion(s - 1);
}
