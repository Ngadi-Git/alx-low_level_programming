#include <stdio.h>
#include "list.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t print_list(const list_t *h)
{
	const list_ *current = h;
	size_t node_count = 0;

	printf("[");
	while (current != NULL)
	{
		if (current->str == NULL)
			printf("(nil)");
		else
			printf("%s", current->str);
	}
	node_count++;
	current = current->next;

	if (current != NULL)
		printf(", ");
	printf("]\n");

	return (node_count);
}
