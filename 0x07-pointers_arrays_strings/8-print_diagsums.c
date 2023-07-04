#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - sum of the two diagonals of a square matrix of integers.
 * @a: pointer to an interger
 * @size: variable to hold the size od the matrix
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i, j, c;
	int maj, min;

	maj = 0;
	min = 0;
	c = 0;
	for (i = 0; i < size; i++)
	{
		for  (j = 0; j < size; j++)
		{
			if (i == j)
				maj += *(a + c);
			if (j == size - 1 - i)
				min += *(a + c);
			c++;
		}
	}
	printf("%d, %d\n", maj, min);
}
