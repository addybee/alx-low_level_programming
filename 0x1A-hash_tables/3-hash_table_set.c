#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to
 * @key: is the key.
 * @value: the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *head, *temp = NULL;

	if (!ht || !key || strlen(key) <= 0 || *key <= 0)
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	head = ht->array[index];

	if (head == NULL)
	{
		/* Key does not exist. */
		ht->array[index] = add_node(&head, key, value);
		return (ht->array[index] ? 1 : 0);
	}
	while (temp != NULL)
	{
		/* Scenario 1: Update the value. */
		if (strcmp(head->key, key) == 0)
		{
			free(head->value);
			head->value = strdup(value);
			return (head->value ? 1 : 0);
		}
		temp = temp->next;
	}

	/* Scenario 2: Handle the collision. */
	ht->array[index] = add_node(&head, key, value);
	return (ht->array[index] ? 1 : 0);
}

/**
 * add_node - adds a new node at the beginning of a hash_node_t list.
 * @head: pointer to a pointer to hash_node_t
 * @key: key to be added to the node
 * @value: the value associated with the key
 *
 * Return: the address of the new element, or NULL if it failed
 */
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new;
	char *temp_key = NULL, *temp_value = NULL;

	if (key == NULL || head == NULL || !value)
		return (NULL);

	temp_key = strdup(key);
	if (!temp_key)
		return (NULL);

	temp_value = strdup(value);
	if (!temp_value)
	{
		free(temp_key);
		return (NULL);
	}
	new = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(temp_key);
		free(temp_value);
		return (NULL);
	}
	new->key = temp_key;
	new->value = temp_value;
	new->next = *head;
	*head = new;
	return (*head);
}
