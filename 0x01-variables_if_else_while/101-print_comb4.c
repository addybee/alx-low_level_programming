#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 when successful
 */
int main(void)
{
	int i, F, S, L;

	for (i = 1; i < 790; i++)
	{
		F = i / 100;
		L = i % 10;
		S = (i / 10) % 10;
		if ((F >= S) || (F >= L) || (S >= L))
			continue;
		putchar('0' + F);
		putchar('0' + S);
		putchar('0' + L);
		if (i != 789)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
