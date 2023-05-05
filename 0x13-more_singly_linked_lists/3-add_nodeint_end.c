#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - add a new node at the end of the list
 *@head: pointer to a pointer to a list
 *@n: an int to be added to the list
 *Return: returns the address of the element added
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_n, *current = *head;

	if (head == NULL)
		return (NULL);

	new_n = malloc(sizeof(listint_t));
	if (new_n == NULL)
		return (NULL);
	new_n->n = n;
	new_n->next = NULL;

	if (*head == NULL)
	{
		*head = new_n;
		return (new_n);
	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_n;
	}
	return (new_n);
}
