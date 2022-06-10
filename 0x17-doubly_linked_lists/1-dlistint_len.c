#include "lists.h"
#include <stdlib.h>
/**
 * dlistint_len - function to return list with its elements
 * @h: list whose elements are to be returned
 * Return: ....
 */
size_t dlistint_len(const dlistint_t *h)
{
	int lenght = 0;

	while (h != NULL)
	{
		++lenght;
		h = h->next;
	}
	return (lenght);
}
