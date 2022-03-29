#include "main.h"
/**
 * _strchr - locate character in a string
 * @s: source string to be located
 * @c: charcter to be found
 *
 * Return: string character is found in
 */
char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
	{
		a++;
	}
	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}
	return ('\0');
}
