#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: print out the last digit of a given number
 *
 * Return: an int that is last digit
 */
int print_last_digit(int n)
{
	int r;

	r = n % 10;
	if (r < 0)
		r *= -1;
	_putchar('0' + r);
	return (r);
}
