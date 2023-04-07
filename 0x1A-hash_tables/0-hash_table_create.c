#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table.
 * @size: size of the hash table.
 * Return: a pointer to the newly created hash table otherwhise returns NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newer_hash_table = 0;

	newer_hash_table = calloc(1, sizeof(hash_table_t));
	if (newer_hash_table == 0)
		return (0);

	if (size == 0 || size == '\0')
	{
		free(newer_hash_table);
		return (0);
	}

	newer_hash_table->size = size;

	newer_hash_table->array = calloc(size, sizeof(hash_node_t *));
	if (newer_hash_table->array == 0)
	{
		free(newer_hash_table);
		return (0);
	}

	return (newer_hash_table);
}
