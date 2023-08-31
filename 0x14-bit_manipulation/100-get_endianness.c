#include "main.h"
/**
 * get_endianness - checks the endianness.
 * Return: return 1 for little endian and 0 for big endian.
*/
int get_endianness(void)
{
	unsigned int value;
	
	value = 0x02040608;
	if ((0xff & value) == 0x08)
	{
		return (1);
	}
	return (0);
}