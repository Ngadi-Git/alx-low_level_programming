#include "lists.h"

/**
 * listint_len - counts the number of nodes in a linked list
 * @top: head of the list
 *
 * Return: the number of elements
 */

size_t listint_len(const listint_t *top)
{
	size_t nodes_count = 0;

	while (top != NULL)
	{
		top = top->next;
		nodes_count++;
	}

	return (nodes_count);
}
