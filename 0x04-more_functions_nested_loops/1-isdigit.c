#include "main.h"
/**
 * _isdigit - Checks for a digit
 * @c: string to be checked
 * Return: 1 for digit, 0 for anything else
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
