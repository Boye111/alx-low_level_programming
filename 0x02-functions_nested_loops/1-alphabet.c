#include "main.h"
/**
 * main - print alphabets
 * print_alphabet - prints alphabet in lowercase
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
