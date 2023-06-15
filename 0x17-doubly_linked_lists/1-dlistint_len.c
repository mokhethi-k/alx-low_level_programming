#include "lists.h"
/**
 *dlistint_len - find the nujmber of elements in a linked list
 *@h: a pointer to a list
 *Return: returns the number of elements in a linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		node_count++;
		current = current->next;
	}
	return (node_count);
}
