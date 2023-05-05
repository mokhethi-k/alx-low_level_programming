#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - add a new node at the end of the list
 *@head: pointer to a pointer to a list
 *@str: a string to be added to the list
 *Return: returns the address of the element added
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len  = 0;
	list_t *new_n, *current = *head;

	new_n = malloc(sizeof(list_t));
	if (head == NULL || str == NULL)
		return (NULL);

	while (str[len])
		len++;
	if (new_n == NULL)
	{
		free(new_n);
		return (NULL);
	}

	new_n->str = strdup(str);
	new_n->len = len;
	new_n->next = NULL;

	if (*head == NULL)
	{
		*head = new_n;
		return (new_n);
	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_n;
	}
	return (new_n);
}
