#include "hash_tables.h"
/**
 * hash_table_create - create a hash table
 * @size: size of the hash table
 * Return: NULL if something is wrong otherwise a pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	unsigned int i;

	if (size < 1)
		return (NULL);
	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->array = malloc(sizeof(void *) * size);
	if (table->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		table->array[i] = NULL;
	table->size = size;
	return (table);
}