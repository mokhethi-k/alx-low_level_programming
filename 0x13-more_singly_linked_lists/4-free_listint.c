#include "lists.h"
#include <stdlib.h>
/**
 *free_listint - frees the list
 *@head: pointer to the list
 *Return: returns nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
