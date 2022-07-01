#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_create - Creates a hash table
 * @size: Size of the array
 * Return: ...
 */
hash_table_t *hash_table_create(unsigned long int size);
{
	unsigned long int i = 0;
	hash_table_t *new_has_t = NULL;
	hash_node_t **array = NULL;

	new_has_t = malloc(sizeof(hash_table_t));
	if (htable == NULL)
		return (NULL);
	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
		return (NULL);
	for (; i < size; ++i)
		array[i] = NULL;
	new_has_t->size = size;
	new_has_t->array = array;

	return (new_has_t);
}
