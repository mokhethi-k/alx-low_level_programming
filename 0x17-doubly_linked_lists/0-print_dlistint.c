#include "lists.h"
/**
 *print_dlistint - prints the elements of the list
 *@h: pointer to the head of the list
 *Return: returns the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num_nodes = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		num_nodes++;
	}
	return (num_nodes);
}
