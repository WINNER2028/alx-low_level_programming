#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: pointer to the hash table.
 * @key: key to get.
 * Return: the value associated with the element, or 0 otherwhise.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *list;

	if (ht == 0 || key == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	list = ht->array[index];

	while (list)
	{
		if (strcmp(list->key, key) == 0)
			return (list->value);

		list = list->next;
	}

	return (0);
}
