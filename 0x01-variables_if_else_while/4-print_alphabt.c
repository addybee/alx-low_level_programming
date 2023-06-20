#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 when successful
 */
int main(void)
{
	char lowalpha;

	lowalpha = 'a';
	while (lowalpha <= 'z')
	{
		if (lowalpha == 'e' || lowalpha == 'q')
		{
			lowalpha++;
			continue;
		}
		putchar(lowalpha);
		lowalpha++;
	}
	putchar('\n');
	return (0);
}
