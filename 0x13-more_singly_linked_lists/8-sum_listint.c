#include "lists.h"

/**
 *sum_listint - sum up all data of the list
 *@head: pointer to the list
 *Return: returns the sum of all data otherwise 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
