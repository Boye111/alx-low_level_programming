#include "main.h"
/**
 * _memcpy - copy memory area
 * @dest: destination to be copied to
 * @src: source copied from
 * @n: bytes from memory area
 *
 * Return: memory area replaced
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
