#include "lists.h"
/**
 *list_len - fints the length of the list
 *@h: pointer to a list
 *Return: returns the length of the list
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
