#include "lists.h"
/**
 *insert_dnodeint_at_index - insert a new node at a gived position
 *@h: a double pointer ti the linked list
 *@idx: the index of the new node
 *@n: value of the new node tobe added
 *Return: returns the address of the new nde otherwise NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h, *new;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	for (i = 0; i < idx - 1; i++)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
	}
	if (current == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = current;
	new->next = current->next;

	if (current->next != NULL)
		current->next->prev = new;
	current->next = new;
	return (new);
}
