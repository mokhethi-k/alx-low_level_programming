#include "lists.h"
#include <stdlib.h>
/**
 *delete_nodeint_at_index - delete a node at a given index
 *@head: pointer to a pointer to a list
 *@index: index of the node to be deleted
 *Return: returns 1 on success otherwiswe -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *to_delete = *head, *current = NULL;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	for (i = 0; (i < index) && (to_delete != NULL); i++)
	{
		current = to_delete;
		to_delete = to_delete->next;
	}

	if (to_delete == NULL)
		return (-1);
	if (current == NULL)
	{
		*head = to_delete->next;
	}
	else
		current->next = to_delete->next;
	free(to_delete);

	return (1);
}
