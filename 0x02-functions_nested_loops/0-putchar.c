#include "main.h"
/**
 * main - Entry point
 * Description: Program to print putchar and move to next line
 * Return: Always (Success)
 */
int main(void)
{
	char c[9] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(c[i]);
	}
	
	_putchar('\n');
	return (0);
}
