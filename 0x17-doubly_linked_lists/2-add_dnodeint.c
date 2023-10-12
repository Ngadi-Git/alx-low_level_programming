#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: A pointer to the address of the head of the listint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: The address of the new element, or NULL on failure.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newList;

	newList = malloc(sizeof(listint_t));
	if (newList == NULL)
		return (NULL);

	newList->n = n;
	newList->next = *head;

	*head = newList;

	return (newList);
}
