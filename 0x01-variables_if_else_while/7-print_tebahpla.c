#include <stdio.h>
/**
 * main - entry point
 *
 *Return: 0 when successful
 */
int main(void)
{
	char revalpha;

	revalpha = 'z';
	while (revalpha >= 'a')
	{
		putchar(revalpha);
		revalpha--;
	}
	putchar('\n');
	return (0);
}
