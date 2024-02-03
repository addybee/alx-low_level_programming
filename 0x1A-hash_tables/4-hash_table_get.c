#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: the hash table you want to retrieve value from
 * @key: is the key to look up for.
 *
 * Return: the value associated with the element, or
 * NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *head;

	if (!ht || !key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	head = ht->array[index];

	if (head)
	{
		/* Scenario 1: key is in head */
		if (strcmp(head->key, key) == 0)
			return (head->value);

		return (get_key_node(head->next, (char *)key)->value);
	}
	return (NULL);
}

/**
 * get_key_node - finds the node of a hash_node_t linked list that
 * contain a given key.
 * @head: head of the hash_node_t.
 * @key: key node to be found
 * Return: pointer to node of type hash_node_t.
 */
hash_node_t *get_key_node(hash_node_t *head, char *key)
{
	/* declare variables */
	hash_node_t *tem_ptr;

	/* check for valid input arguement */
	if (!head || key)
		return (NULL);

	/* traverse the list to the key node*/
	tem_ptr = head;
	while (tem_ptr != NULL)
	{
		if (strcmp(tem_ptr->key, key) == 0)
			return (tem_ptr);
		tem_ptr = tem_ptr->next;
	}
	return (tem_ptr);
}
