#include "lists.h"

/**
 * lists_len - function that returns an elemenmt
 * @h: Linked list_t list
 *
 * Return: the number of element in h
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
