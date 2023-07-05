#include "main.h"
/**
 * factorial -  returns the factorial of a given number.
 * @n: variable to hold the integer
 * Return: return factorial of the number
 */
int factorial(int n)
{
	if (n < 0)
		return (- 1);
	if (n == 0)
		return (1);
	return (n * factorial(n-1));
}
