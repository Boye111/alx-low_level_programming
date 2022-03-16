#include "main.h"
/**
 * main - print alphabet in lowercase
 * Description: Uses main file
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
