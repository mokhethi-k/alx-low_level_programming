#include "lists.h"
/**
 *get_dnodeint_at_index - get the nth node of a linked list
 *@head: pointer to the linked list
 *@index: index of the node
 *Return: returns the index of the node otherwiase NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;

	while (current != NULL && index > 0)
	{
		current = current->next;
		index--;
	}

	if (current == NULL)
		return (NULL);
	return (current);
}
