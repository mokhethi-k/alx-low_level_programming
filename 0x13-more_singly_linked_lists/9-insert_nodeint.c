#include "lists.h"
#include <stdlib.h>
/**
 *insert_nodeint_at_index - inserts new node at a given index
 *@head: pointer to a pointer to a linked list
 *@idx: index at which the node is to be added
 *@n: number to be added
 *Return: returns the address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_n, *current = *head;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	new_n = malloc(sizeof(listint_t));
	if (new_n == NULL)
		return (NULL);
	new_n->n = n;

	if (idx == 0)
	{
		new_n->next = *head;
		*head = new_n;
		return (new_n);
	}

	for (i = 0; current && i < (idx); i++)
	{
		if (i == (idx - 1))
		{
			new_n->next = current->next;
			current->next = new_n;
			return (new_n);
		}
		else
			current = current->next;
	}
	if (current  == NULL)
		return (NULL);

	return (new_n);

}
