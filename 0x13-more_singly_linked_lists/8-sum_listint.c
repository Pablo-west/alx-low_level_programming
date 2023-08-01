#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp_sum = head;

	while (temp_sum)
	{
		sum += temp_sum->n;
		temp_sum = temp_sum->next;
	}

	return (sum);
}
