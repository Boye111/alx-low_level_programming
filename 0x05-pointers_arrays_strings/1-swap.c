#include "main.h"
/**
 * swap_int - swap value of two integer
 * @a: First integer
 * @b: second integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
