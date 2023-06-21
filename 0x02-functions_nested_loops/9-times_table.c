#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void when successful
 */
void times_table(void)
{
	int j, k, a;

	for (j = 0; j < 10; j++)
	{
		for (k = 0; k < 10; k++)
		{
			a = j * k;
			if ((a / 10) == 0)
			{
				if (k != 0)
					_putchar(32);
				_putchar((a % 10) + '0');
				if (k == 9)
					continue;
				_putchar(44);
				_putchar(32);
			}
			else
			{
				_putchar((a / 10) + '0');
				_putchar((a % 10) + '0');
				if (k == 9)
					continue;
				_putchar(44);
				_putchar(32);
			}
		}
		_putchar('\n');
	}
}
