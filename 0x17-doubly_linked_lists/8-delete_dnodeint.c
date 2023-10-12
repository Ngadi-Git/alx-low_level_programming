#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes nodes from a dlistint_t
 *                            at a specified index.
 * @head: Pointer to head of the dlistint_t.
 * @index: Index of node to delete.
 *
 * Return: Upon success - 1.
 *         Otherwise - -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *bfr = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (bfr == NULL)
			return (-1);
		bfr = bfr->next;
	}

	if (bfr == *head)
	{
		*head = bfr->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		bfr->prev->next = bfr->next;
		if (bfr->next != NULL)
			bfr->next->prev = bfr->prev;
	}

	free(bfr);
	return (1);
}
