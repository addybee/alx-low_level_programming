#include "main.h"
/**
 * chsqrt - checks for the sqrt of a number
 * @num: is the number
 * @i: is the iterator
 * Return: the sqrt of a number otherwisee -1
 */
int chsqrt(int num, int i)
{
	if (num == 1)
		return (num);
	else if (num == i * i)
		return (i);
	else if (i == num - 1 || num < 0)
		return (-1);
	return (chsqrt(num, i + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: variable of typeinteger
 * Return: natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	return (chsqrt(n, 0));
}
