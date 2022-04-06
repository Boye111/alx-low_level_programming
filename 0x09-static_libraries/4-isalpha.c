#include "main.h"
/**
 * _isalpha - checks if int is a letter
 * @c: int is to be checked
 *
 * Description: takes an input and checks for letters
 *
 * Return: 1 if it is a letter 0 if it isn't
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
