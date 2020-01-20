#include "hash_tables.h"
/**
 * hash_table_set - Adds elements to hash table
 * @ht: hash table
 * @key: value obtained from djb2 hash fuction
 * @value: value to store
 * Return: 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *new_node = NULL;
unsigned long int idx = 0;

	if (ht == NULL || key == NULL || value == NULL || strlen(key) == 0)
		return (0);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	idx = key_index((unsigned char *)key, ht->size);
	if ((ht->array[idx] != NULL) &&
		(strcmp(new_node->key, (char *)ht->array[idx]->key) == 0))
		{
		free(ht->array[idx]->value);
		ht->array[idx]->value = new_node->value;
		return (1);
		}
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	return (1);
}