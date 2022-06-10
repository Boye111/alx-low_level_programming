#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint_end - function to add to the end of the list
 * @head: .....
 * @n: ....
 * Return: ....
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = NULL, *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node = NULL)
		return (NULL);
	new_node->n = n;
	if (*head)
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		new_node->next = NULL;
		new_node->prev = current;
		current->next = new_node;
		return (new_node);
	}
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
	return (*head);
}

