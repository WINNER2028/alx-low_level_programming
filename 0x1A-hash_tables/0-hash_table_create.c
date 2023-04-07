#include "hash_tables.h"
/**
 * project AUTHOR: OBI CHIEMERIE
 * hash_table_create - function that creates a hash table.
 * @size: size of the hash table.
 * Return: a pointer to the newly created hash table otherwhise returns NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newer_hash_table = NULL;

	newer_hash_table = calloc(1, sizeof(hash_table_t));
	if (newer_hash_table == NULL)
		return (NULL);

	if (size == 0 || size == '\0')
	{
		free(newer_hash_table);
		return (NULL);
	}

	newer_hash_table->size = size;

	newer_hash_table->array = calloc(size, sizeof(hash_node_t *));
	if (newer_hash_table->array == NULL)
	{
		free(newer_hash_table);
		return (NULL);
	}

	return (newer_hash_table);
}
