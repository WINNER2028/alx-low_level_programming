#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: pointer to the hash table.
 * Return: Nothing it is a void function :D
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *second = NULL, *hash = NULL;

	if (ht == NULL)
		return;

	i = 0;

	while (ht->size > i)
	{
		if (ht->array[i] != NULL)
		{
			hash = ht->array[i];
			while (hash != NULL)
			{
				second = hash;
				free(hash->key);

				if (hash->value != NULL)
					free(hash->value);

				hash = hash->next;
				free(second);
			}
		}
		i++;
	}

	free(ht->array);
	free(ht);
}
