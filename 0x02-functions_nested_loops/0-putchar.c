#include "putchar.h"
/**
 * main - Entry point
 * Description: Program to print putchar and move to next line
 * Return: Always (Success)
 */
int main(void)
{
	char text[9] = "Holberton";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(text[i]);
	}
	
	_putchar('\n');
	return (0);
}
