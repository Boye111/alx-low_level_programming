#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - function to add node
 * @head: head of the list
 * @n: number to place node
 * Return: new list with node added at the beginning
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node = NULL)
		return (NULL);
	new_node->n = n;
	if (*head)
	{
		new_node->next = *head;
		new_node->prev = (*head)->prev;
		(*head)->prev = new_node;
		*head = new_node;
		return (*head);
	}
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
	return (*head);
}
