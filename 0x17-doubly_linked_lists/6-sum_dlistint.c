#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_dlistint - function
 * @head: ...
 * Return: ..
 */
int sum_dlistint(dlistint_t *head);
{
	dlistint_t *current = head;
	int sum = 0;

	if (head)
	{
		while (current != NULL)
		{
			sum += current->n;
			current = current->next;
		}
	}
	return (sum);
}
