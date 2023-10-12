#include "lists.h"

/**
 * sum_dlistint - Returns the sum total of all the 
 * data (n) of a doubly linked list
 *
 * @head: The head of the doubly linked list
 * Return: Returns sum of the data in the list
 */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	while (head)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}
