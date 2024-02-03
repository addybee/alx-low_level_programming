#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int long i;
	hash_node_t *head;

	if (!ht)
		return;

	/* Frees the table. */
	for (i = 0; i < ht->size; i++)
	{
		head = ht->array[i];
		free_hash_node(head);
	}
	/* Free the array lists and hash table. */
	if (ht->array != NULL)
	{
		free(ht->array);
		ht->array = NULL;
	}
	if (ht != NULL)
	{
		free(ht);
		ht = NULL;
	}
}

/**
 * free_hash_node - frees a hash_node_t list.
 * @head: pointer to the hash node head
 * Return: nothing
 */
void free_hash_node(hash_node_t *head)
{
	hash_node_t *temp;

	if (!head)
		return;
	temp = head->next;
	while (head != NULL)
	{
		if (head->key != NULL)
		{
			free(head->key);
			head->key = NULL;
		}
		if (head->value != NULL)
		{
			free(head->value);
			head->value = NULL;
		}
		free(head);
		head = temp;
		if (head != NULL)
			temp = head->next;
	}
}
