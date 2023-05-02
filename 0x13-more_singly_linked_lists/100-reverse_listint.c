#include "lists.h"
#include <stdlib.h>
/**
 *reverse_listint - reverses the list
 *@head: pointer to a pointer to a list
 *Return:returns a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;

	return (prev);
}
