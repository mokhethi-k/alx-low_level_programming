#include "lists.h"
/**
 *print_listint - prints all elements of the list
 *@h: pointer to a linked list
 *Return: returns the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
