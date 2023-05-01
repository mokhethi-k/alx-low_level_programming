#include "lists.h"
/**
 *listint_len - fints the length of the list
 *@h: pointer to a list
 *Return: returns the length of the list
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
