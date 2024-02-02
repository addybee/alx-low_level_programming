#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: size of the array.
 *
 * Return: pointer to the newly created hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashTable;
	int i;

	if (size == 0)
		return (NULL);
	hashTable = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (hashTable == NULL)
		return (NULL);
	hashTable->size = size;
	hashTable->array = (hash_node_t **)calloc(hashTable->size,
			sizeof(hash_node_t *));
	if (hashTable->array == NULL)
	{
		free(hashTable);
		return (NULL);
	}
	for (i = 0; i < hashTable->size; i++)
	{
		hashTable->array[i] = NULL;
	}
	return (hashTable);
}
