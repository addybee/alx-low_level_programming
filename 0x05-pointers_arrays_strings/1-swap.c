#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a: pointer variable of type integer
 * @b: pointer variable of type integer
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int p = *b;
	int q = *a;
	*a = p;
	*b = q;
}
