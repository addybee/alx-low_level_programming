#include <stdio.h>
int is_prime(long int n);
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	long int i, q, high;

	q = 612852475143;
	high = 0;
	for (i = 3; i <= q; i += 2)
	{
		while (is_prime(i) && ((q % i) == 0))
		{
			high = i;
			q /= i;
		}
	}
	printf("%ld\n", high);
	return (0);
}
/**
 * is_prime - checks if a number is prime
 * @n: long integer
 * Return: long
 */
int is_prime(long int n)
{
	long int i;

	if (n < 0)
		return (0);
	if (n <= 3)
		return (1);
	if ((n % 2) == 0)
		return (0);
	for (i = 2; (i * i) <= n; i++)
	{
		if ((n % i) == 0)
			return (0);
	}
	return (1);
}
