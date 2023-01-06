#include "hash_tables.h"
/*
 * CREATES A HASH TABLE
 * @param size, size of TABLE
 * @return : returns pointer hash_table_t struct
*/
hash_table_t*
/*definition*/
hash_table_create(unsigned long int size)

{
	hash_node_t *node_pointer;
	hash_table_t *table;
	hash_table_t *retrnTable;

	node_pointer = malloc(sizeof(hash_node_t));
	table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = &(node_pointer);
	retrnTable = table;

	return (returnTable);
}
