#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: pointer to the hash table.
 * Return: Nothing it is a void function :D
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *second = 0, *hash = 0;

	if (ht == 0)
		return;

	i = 0;

	while (ht->size > i)
	{
		if (ht->array[i] != 0)
		{
			hash = ht->array[i];
			while (hash != 0)
			{
				second = hash;
				free(hash->key);

				if (hash->value != 0)
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
