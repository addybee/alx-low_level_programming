#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers, followed by a new
 * line.
 * @a: integer type pointer
 * @n: an integer variable
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (a[i] == a[n - 1])
		{
			printf("%d\n", a[i]);
			continue;
		}
		printf("%d, ", a[i]);
	}
}
