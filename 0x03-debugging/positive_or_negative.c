#include <stdio.h>
/**
 * positive_or_negative - Entry point
 *
 * Return: always 0 (successful)
 */
void positive_or_negative(int n)
{
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
}

