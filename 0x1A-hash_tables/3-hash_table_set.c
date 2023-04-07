#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: pointer to the hash table.
 * @key: key to set.
 * @value: value to set.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *newer_node, *second_pointer;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	newer_node = ht->array[index];

	while (newer_node)
	{
		if (strcmp(newer_node->key, key) == 0)
		{
			free(newer_node->value);
			newer_node->value = strdup(value);
			if (newer_node->value == NULL)
				return (0);
			return (1);
		}
		newer_node = newer_node->next;
	}

	second_pointer = malloc(sizeof(hash_node_t));
	if (second_pointer == NULL)
		return (0);

	second_pointer->key = strdup(key);
	if (second_pointer->key == NULL)
		return (0);

	second_pointer->value = strdup(value);
	if (second_pointer->value == NULL)
		return (0);

	second_pointer->next = ht->array[index];

	ht->array[index] = second_pointer;

	return (1);
}
