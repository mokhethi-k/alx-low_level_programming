#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 *add_node - adds new node at the beginning
 *@head: a pointer to a pointer to a list
 *@str: string to add to the node
 *Return: returns the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;

	if (head == NULL || str == NULL)
		return (NULL);
	while (str[len])
		len++;

	list_t *new_n = malloc(sizeof(list_t));

	if (new_n == NULL)
		return (NULL);
	new_n->str = strdup(str);

	if (new_n->str == NULL)
	{
		free(new_n);
		return (NULL);
	}

	new_n->len = len;
	new_n->next = *head;
	*head = new_n;

	return (new_n);
}
