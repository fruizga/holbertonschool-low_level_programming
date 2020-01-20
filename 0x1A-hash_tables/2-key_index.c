#include "hash_tables.h"
/**
 * key_index - Returns the index of a key
 * @key: key
 * @size: size of array table
 * Return: posible index to store the key/value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int idx;

	idx = hash_djb2(key);
	idx %= size;
	return (idx);
}