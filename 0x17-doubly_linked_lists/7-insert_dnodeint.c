#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: pointer to a pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: value to add to the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *temp = *h;
	unsigned int i;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (i = 0; temp != NULL && i < idx - 1; i++)
		temp = temp->next;

	if (temp == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = temp;
	new_node->next = temp->next;

	if (temp->next != NULL)
		temp->next->prev = new_node;

	temp->next = new_node;

	return (new_node);
}
