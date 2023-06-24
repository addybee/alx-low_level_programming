#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 when successful
 */
int main(void)
{
	int i, F, S;

	for (i = 1; i < 90; i++)
	{
		F = i / 10;
		S = i % 10;
		if ((F > S) || (F == S))
			continue;
		putchar('0' + F);
		putchar('0' + S);
		if (i != 89)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
