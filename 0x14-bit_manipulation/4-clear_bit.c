/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to the number which the bit is to be set to 0.
 * @index: the index, starting from 0 of the bit you want to set to 0
 * Return: 1 if it worked, or -1 if an error occurred
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bitmask;

	bitmask = 1;
	if (index >= (8 * sizeof(n)))
		return (-1);
	if ((*n & (bitmask << index)))
	*n = (*n ^ (bitmask << index));
	return (1);
}
