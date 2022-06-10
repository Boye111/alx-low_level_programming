#include "lists.h"
#include <stdlib.h>
/**
 * dlistint_len - function to return list with its elements
 * @h: list whose elements are to be returned
 * Return: ....
 */
size_t dlistint_len(const dlistint_t *h)
{
	int length = 0;

	while (h != NULL)
	{
		++length;
		h = h->next;
	}
	return (length);
}
