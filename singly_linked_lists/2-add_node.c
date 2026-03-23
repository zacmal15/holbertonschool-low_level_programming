#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds new node at beginning of list_t list
 * @head: pointer to pointer of head of list
 * @str: string to be added
 *
 * Return: address of new element, otherwise NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = len;
	new->next = *head;
	*head = new;

	return (new);
}
