#include "hash_tables.h"
/**
 * key_index -  gives you the index of a key.
 * @key:  is the key which index is to be found
 * @size: size of the array of the hash table
 *
 * Return: the index associated with the slot in hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key) % size;

	return (index);
}
