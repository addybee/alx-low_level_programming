/**
 * flip_bits - the number of bits you would need to flip to get from one number
 * to another.
 * @n: the first number.
 * @m: the second number.
 * Return: the number of bits you would need to flip to get from first to
 * second number.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result, mask, counter;
	int i;

	if (n == m)
	{
		return (0);
	}
	mask = 1;
	result = m ^ n;
	i = (8 * sizeof(result)) - 1;
	counter = 0;
	while (i > -1)
	{
		if (((result >> i) & mask) == 1)
		{
			counter++;
		}
		i--;
	}
	return (counter);
}
