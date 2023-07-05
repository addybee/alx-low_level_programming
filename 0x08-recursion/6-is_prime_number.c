#include "main.h"
/**
 * is_prime_number - returns 1 if the input integer is a prime number, otherwise return 0.
 * @n: variable of typeinteger
 * Return: 1 if the input integer is a prime number, otherwise return 0.natural
 * square root of a number.
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	if (n < 1)
		return (0);
	return n % is_prime_number(n - 1)
}
