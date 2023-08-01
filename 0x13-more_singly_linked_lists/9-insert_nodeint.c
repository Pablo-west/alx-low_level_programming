#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a node at a given position.
 * @head: Pointer to the head of the linked list.
 * @idx: The index at which the new node should be added (index starts at 0).
 * @n: The value to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 * If it is not possible to add the new node at index idx.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
if (head == NULL)
return (NULL);

listint_t *new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->data = n;

if (idx == 0)
{
new_node->next = *head;
*head = new_node;
}
else
{
listint_t *current = *head;
unsigned int i = 0;
while (current != NULL && i < idx - 1)
{
current = current->next;
i++;
}
if (current == NULL)
{
free(new_node);
return (NULL);
}

new_node->next = current->next;
current->next = new_node;
}

return (new_node);
}
