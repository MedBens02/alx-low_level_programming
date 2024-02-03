#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key.
 *
 * @ht: hash table.
 * @key: key we're looking for.
 *
 * Return: Value associated with the element, or NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);

	if (idx >= ht->size)
		return (NULL);

	node = ht->array[idx];

	while (node != NULL && strcmp(node->key, key) != 0)
		node = node->next;

	if (node != NULL)
		return node->value;

	return (NULL);
}
