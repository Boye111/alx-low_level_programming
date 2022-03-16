#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets ten times
 *
 * Description: uses two  loops to ping to z
 * Return: void
 */
void print_alphabet_x10(void)
{
	char ch;

	int num;

	for (num = 0; num < 10; ++num)
	{
		for (ch = 'a'; ch <= 'z'; ++ch)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
