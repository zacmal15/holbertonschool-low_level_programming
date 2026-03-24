#include "lists.h"

/**
 * sum_dlistint - returns sum of all data of a list
 * @head: pointer to head of list
 *
 * Return: sum of all node values, otherwise 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
