#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @n: an integer should be converted to its absolute value.
 *
 * Return: absolue value
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}
