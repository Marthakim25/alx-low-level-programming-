#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: the head of a list
 *
 * Return: NULL
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
