#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a listint_t linked list, and returns the head node’s data (n)
 * @head: the head of a list
 *
 * Return: 0
 */
int pop_listint(listint_t **head)
{
	int node;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)

