#include <stdlib>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - prints all elements of a list
 * @h: double linked list to print
 * Return: number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h);
{
	int length = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		++length;
		h = h->next;
	}
	return (length);
}
