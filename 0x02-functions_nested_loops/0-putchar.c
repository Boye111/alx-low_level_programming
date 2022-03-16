#include "main.h"
/**
 * main - Entry point
 * Description: Program to print putchar and move to next line
 * Return: Always (Success)
 */
int main(void)
{
	char str[] = "_putchar";
	int i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		++i;
	}

	_putchar('\n');
	return (0);
}
