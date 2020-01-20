#include "hash_tables.h"
/**
 * hash_table_delete - delete a hash table
 * @ht: hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *tmp, *next;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			next = tmp->next;
			free(tmp->value);
			free(tmp->key);
			free(tmp);
			tmp = next;
		}
	}
	free(ht->array);
	free(ht);
}