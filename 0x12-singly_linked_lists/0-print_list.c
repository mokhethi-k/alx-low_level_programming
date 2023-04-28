#include <stdio.h>
#include "lists.h"

/**
 *print_list - prints the list
 *@h: pointer to a list
 *Return: returns number of node
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}

		h = h->next;
		nodes++;
	}

	return (nodes);
}
