#include "main.h"
/**
 * _inp - check if a number is a prime number
 * @divisor: holds the num use for dividing the num to check if it is divisible
 * @num: the number to be checked
 * Return: 1 when prime or 0 otherwise
 */
int _inp(int num, int divisor)
{
	if (!(num % divisor) || num < 2)
		return (0);
	else if (num - 1 == divisor)
		return (1);
	return (_inp(num, (divisor + 1)));
}
/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0.
 * @n: variable of typeinteger
 * Return: 1 if the input integer is a prime number, otherwise return 0.natural
 * square root of a number.
 */
int is_prime_number(int n)
{
	return (_inp(n, 2));
}
