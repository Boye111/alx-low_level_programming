#include "main.h"
/**
 * print_numbers - program that lets you print numbers
 * Return: prints numbers 1 to 9
 */
void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		_putchar(c + '0');
	}
	_putchar('\n');
}
