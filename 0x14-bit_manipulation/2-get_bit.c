#include "main.h"
/**
 * get_bit - get the value of a bit at a given index.
 * @n: number which the bit is to be retrieve from.
 * @index: the index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occured.
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bitmask;

	bitmask = 1;
	if (index >= (8 * sizeof(n)))
		return (-1);
	if ((n & (bitmask << index)))
		return (1);
	return (0);
}