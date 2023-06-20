#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - entry point
 *
 * Return: 0 when successful
 */
int main(void)
{
	int n, L;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	L = n % 10;
	if (L > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, L);
	}
	else if (L == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, L);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, L);
	}
	return (0);
}
