#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes_i........
 * in a looped listint_t linked list.........
 * @head: A pointer to the head of the listint_t to check.........
 *
 * Return: If the list is not looped - 0.........
 * Otherwise - the number of unique nodes_i in the list.........
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tortoise_node, *hare;
	size_t nodes_i = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tortoise_node = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tortoise_node == hare)
		{
			tortoise_node = head;
			while (tortoise_node != hare)
			{
				nodes_i++;
				tortoise_node = tortoise_node->next;
				hare = hare->next;
			}

			tortoise_node = tortoise_node->next;
			while (tortoise_node != hare)
			{
				nodes_i++;
				tortoise_node = tortoise_node->next;
			}

			return (nodes_i);
		}

		tortoise_node = tortoise_node->next;
		hare = (hare->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.........
 * @head: A pointer to the head of the listint_t list.........
 *
 * Return: The number of nodes_i in the list.........
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes_i, index = 0;

	nodes_i = looped_listint_len(head);

	if (nodes_i == 0)
	{
		for (; head != NULL; nodes_i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes_i; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes_i);
}
