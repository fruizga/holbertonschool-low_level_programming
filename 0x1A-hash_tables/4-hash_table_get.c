#include "hash_tables.h"
/**
 * hash_table_get - retrieve a value associated with a key.
 * @ht: hash table
 * @key: key
 * Return: NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i = 0;
	hash_node_t *aux;

	if (!ht || !key)
	{return (NULL); }
	i = key_index((const unsigned char *)key, ht->size);
	aux = ht->array[i];
	for (; aux; aux = aux->next)
	{
		if (strcmp(aux->key, key) == 0)
		{return (aux->value); }
	}
	return (NULL);
}