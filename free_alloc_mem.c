#include "main.h"

/**
 * free_allocated_memory - frees memory allocated with malloc
 */

void free_allocated_memory(list_t *head, char **strs)
{
	/* Free memory allocated for linked list. This also frees the memory array of pointers in strs points to */
	free_list(head);

	/* Free memory allocated for strs */
	free(strs);
}
