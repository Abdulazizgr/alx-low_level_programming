#include "hash_tables.h"
/**
  * key_index - function that gives you the index of a key
  * @key: string to be hashed and its index retrieved
  * @size: size of the array
  * Return: the key's index
  */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
