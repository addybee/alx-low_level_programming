#include <stdio.h>
int is_prime(int n);
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	long q;
	int high;

	q = 612852475143;
	high = 0;
	for (i= 2; (i * i) <= q; i++)
	{
		while (is_prime(i) && ((q % i) == 0))
		{
			high = i;
			q /= i;
		}
	}
	printf("%d\n", high);
	return (0);
}
int is_prime(int n)
{
	int i;
	
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
