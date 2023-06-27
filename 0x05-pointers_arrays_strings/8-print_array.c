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
		printf("%d", a[i]);
		if (i == (n - 1))
			continue;
		printf(", ");
	}
	putchar('\n');
}
