#include "main.h"
/**
 * print_alphabet - prints alphabet in lowercase
 *
 * Description: Uses the main header file, that brings in the _putchar
 * Return: void.
 */

void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		++ch;
	}
	_putchar('\n');
}
