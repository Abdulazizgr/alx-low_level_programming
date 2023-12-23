#include "hash_tables.h"
/**
  * hash_table_get -  function that retrieves a value associated with a key
  * @ht: hash table
  * @key: key used to retrieve the value
  * Return: the value associated with the element
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *transverse;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);
	else if (ht->array[index]->next == NULL &&
			strcmp(ht->array[index]->key, key) == 0)
	{
		return (ht->array[index]->value);
	}
	else
	{
		transverse = ht->array[index];
		while (transverse != NULL)
		{
			transverse = transverse->next;
			if (strcmp(transverse->key, key) == 0)
				return (transverse->value);
		}
	}
	return (NULL);
}
