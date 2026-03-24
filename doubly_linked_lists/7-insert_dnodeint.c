#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts new node at given position
 * @h: pointer to pointer of head of list
 * @idx: index where new node is added
 * @n: value to store in new node
 *
 * Return: address of new node, otherwise NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node;
	dlistint_t *tmp;

	if (idx == 0)
		return (add_dnodeint(h, n));

	temp = *h;
	while (temp != NULL)
	{
		if (i == idx - 1)
		{
			if (temp->next == NULL)
				return (add_dnodeint_end(h, n));

			new_node = malloc(sizeof(dlistint_t));
			if (new_node == NULL)
				return (NULL);

			new_node->n = n;
			new_node->next = temp->next;
			new_node->prev = temp;

			temp->next->prev = new_node;
			temp->next = new_node;

			return (new_node);
		}

		temp = temp->next;
		i++;
	}

	return (NULL);
}
