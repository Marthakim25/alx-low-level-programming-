#include "lists.h"

/**
 * insert_nodeint_at_idex - insert new nodes
 * given positive
 * @head: the head of list
 * @idx: index of the list where a new node is added
 * @n: integer elements
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int k;
	listint_t *new;
	listint_t *h;

	h = *head;

	if (idx != 0)
	{
		for (k = 0; k < idx - 1 && h != NULL; k++)
		{
			h = h->next;
		}
	}

	if (h == NULL && idx != 0)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = h->next;
		h->next = new;
	}

	return (new);
}
