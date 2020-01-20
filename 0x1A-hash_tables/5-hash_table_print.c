#include "hash_tables.h"
/**
 * hash_table_print - print a hash table
 * @ht: hash table
 *
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0, aux = 0;
	hash_node_t *tmp;

	if (ht != NULL)
	{
		printf("{");
		while (i < ht->size)
		{
			tmp = ht->array[i];
			while (tmp != NULL)
			{
				if (i > 0 && aux != 0)
					printf(", ");
				printf("'%s': '%s'", tmp->key, tmp->value);
				tmp = tmp->next;
				if (tmp != NULL)
				{
					aux = 0;
					printf(", ");
					continue;
				}
				aux = 1;
			}
			i++;
		}
		printf("}\n");
	}
}