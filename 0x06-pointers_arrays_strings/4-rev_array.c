#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array to be reversed
 * @n: number of element of the array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, tp;

	i = 0;
	while (i < n / 2)
	{
		tp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tp;
		i++;
	}
}
