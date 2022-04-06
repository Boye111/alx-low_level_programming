#include "main.h"
/**
 * _strcpy - copy string to the end of another
 * @dest: pointer to string 1
 * @src: pointer to string 2
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest);
}
