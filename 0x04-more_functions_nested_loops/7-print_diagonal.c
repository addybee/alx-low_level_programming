#include "main.h"
/**
 * print_diagonal -  draws a diagonal line on the terminal.
 * @n: integer n
 * Return: void
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, k;

		for (i = 1; i <= n; i++)
		{
			for (k = 1; k < i; k++)
			{
				if (i == 1)
					continue;
				_putchar(' ');
				if (k == 1)
					continue;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
