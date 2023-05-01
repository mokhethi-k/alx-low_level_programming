#include <stdlib.h>
#include "lists.h"
/**
 *pop_listint - deletes the head node of the list
 *@head: pointer to a pointer to a singly linked list
 *Return: if empty return 0 else return head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	num = temp->n;
	free(temp);

	return (num);
}
