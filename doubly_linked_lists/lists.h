#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct dlistin_s - doubly linked list node
 * @n: int stored in node
 * @prev: points to previous node
 * @next: points to next node
 *
 * Description: doubly linked list node structure
 */
typedef struct dlistin_s
{
	int n;
	struct dlistin_s *prev;
	struct dlistint_s *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);

#endif
