#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *bfr;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((bfr = head) != NULL)
	{
		head = head->next;
		free(bfr);
	}
}
