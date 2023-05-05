#include "lists.h"

/**
 *free_list - frees the list
 *@head: pointer to the list
 *Return: returns nothing
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
