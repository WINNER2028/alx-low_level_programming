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
	hash_node_t *new_node, *second_pointer;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	new_node = ht->array[index];

	while (new_node)
	{
		if (strcmp(new_node->key, key) == 0)
		{
			free(new_node->value);
			new_node->value = strdup(value);
			if (new_node->value == NULL)
				return (0);
			return (1);
		}
		new_node = new_node->next;
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
