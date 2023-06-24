#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 when successful
 */
int main(void)
{
	int i, j, F, S, K, L;

	for (i = 0; i < 100; i++)
	{
		F = i / 10;
		S = i % 10;
		for (j = 0; j < 100; j++)
		{
			K = j / 10;
			L = j % 10;
			if (i == j)
				continue;
			putchar('0' + F);
			putchar('0' + S);
			putchar(' ');
			putchar('0' + K);
			putchar('0' + L);
			if (j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
