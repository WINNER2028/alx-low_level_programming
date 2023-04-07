#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table.
 * @ht: pointer to the hash table.
 * Return: Nothing it is a void function :D
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_table_t *hash;
	char *separate = "\0";

	if (ht == NULL)
		return;

	hash = (hash_table_t *)ht;
	i = 0;
	printf("{");

	while (hash->size > i)
	{
		while (hash->array[i])
		{
			printf("%s'%s': ", separate, hash->array[i]->key);
			printf("'%s'", hash->array[i]->value);
			separate = ", ";
			hash->array[i] = hash->array[i]->next;
		}
		i++;
	}

	printf("}\n");
}
