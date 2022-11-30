#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list
 * @head: the head of a list
 * @index: index of the list where the node is deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int k;
	listint_t *prev;
	listint_t *next;

	prev = *head;

	if (index != 0)
	{
		for (k = 0; k < index - 1 && prev != NULL; k++)
		{
			prev = prev->next;
		}

		if (prev == NULL || (prev->next == NULL && index != 0))
		{
			return (-1);
		}

		next = prev->next;

		if (index != 0)
		{
			prev->next = next->next;
			free(next);
		}

		return (1);
	}
}
