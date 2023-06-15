#include "lists.h"
/**
 *sum_dlistint - sums all the data of the linked list
 *@head: pointer to the linked list
 *Return: returns the sum of all the data in a list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
