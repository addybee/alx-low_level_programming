#include "hash_tables.h"

/**
 * hash_table_print - print the hash table
 * @ht: the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, sg;
	hash_node_t *head;

	if (!ht)
		return;
	putchar('{');
	for (i = sg = 0; i < ht->size; i++)
	{
		head = ht->array[i];

		while (head)
		{
			printf("%s'%s': '%s'", sg == 0 ? "" : ", ",
			       head->key, head->value);
			sg++;
			head = head->next;
		}
	}
	printf("}\n");
}
