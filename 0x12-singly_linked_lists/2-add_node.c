#include "lists.h"

/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_nodes;
	size_t ln;

	new_nodes = malloc(sizeof(list_t));
	if (new_nodes == NULL)
		return (NULL);

	new_nodes->str = strdup(str);

	for (ln = 0; str[ln]; ln++)
		;

	new_nodes->len = ln;
	new_nodes->next = *head;
	*head = new_nodes;

	return (*head);
}
