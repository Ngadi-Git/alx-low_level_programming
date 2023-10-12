#include "listsi.h"
#include <stdio.h>

/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 * @h: A pointer to the head of the listint_t list.
 *
 * Return: The number of elements in the listint_t list.
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nods = 0;

	if (h == NULL)
		return (nods);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		nods++;
		h = h->next;
	}

	return (nods);
}
