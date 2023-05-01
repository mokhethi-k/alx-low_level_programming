#include "lists.h"
/**
 *get_nodeint_at_index - returns the nth node of the liistint_t
 *@head: pointer to a singly linked list
 *@index: the index of the node
 *Return: returns the nth node otherwise NULL if does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_p = head;
	unsigned int ind = 0;

	while (current_p != NULL && ind < index)
	{
		current_p = current_p->next;
		ind++;
	}

	return (!current_p ? NULL : current_p);
}
