#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */

void free_list(list_t *head)
{
	list_t *current_node;

	for (current_node = head; current_node != NULL;)
	{
		head = head->next;
		free(current_node->str);
		free(current_node);
		current_node = head;
	}
}
