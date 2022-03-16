#include "main.h"
/**
 * _islower - checks for a lowercase letter
 * @c: c is an int and will be checked if lowercase
 *
 * Description: it returns 1 if lowercase, if not 0.
 * Return: 0 if uppercase 1 if lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
