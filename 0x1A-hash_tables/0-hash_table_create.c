#include "hash_tables.h"
/**
  * hash_table_create - creates a hash table
  * @size: size of the array
  * Return: Pointer to the newly created hash table
  * if something goes wrong return NULL
  */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash = malloc(sizeof(hash_table_t));

	if (new_hash == NULL)
		return (NULL);
	new_hash->size = size;
	new_hash->array = malloc(sizeof(hash_node_t *) * size);
	for (; size > 0; size--)
		new_hash->array[size - 1] = NULL;
	return (new_hash);
}
