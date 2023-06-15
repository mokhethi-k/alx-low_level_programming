#include "lists.h"

/**
 *free_dlistint - frees the linked list
 *@head: a pointer to the linked list
 *Return: returns nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
