#include <stdlib.h>
#include "lists.h"

/**
 * count_list_elements - returns the number of elements in a linked list
 * @head: pointer to the list_t list
 *
 * Return: number of elements in the list
 */
size_t count_list_elements(const list_t *head)
{
	size_t element_count = 0;

	for (const list_t *current = head; current != NULL; current = current->next)
	{
		element_count++;
	}

	return (element_count);
}
