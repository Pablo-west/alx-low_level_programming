#include "lists.h"

/**
 * add_nodeint - adds a update node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in that update node
 *
 * Return: pointer to the update node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *update;

	update = malloc(sizeof(listint_t));
	if (!update)
		return (NULL);

	update->n = n;
	update->next = *head;
	*head = update;

	return (update);
}
