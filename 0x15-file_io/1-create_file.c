#include "main.h"
/**
 * create_file - function to create file
 * @filename: file to be created
 * @tect_content: content of file
 * Return: 1 if success, -1 if failure
 */
int create_file(const char *filename, char *text_content)
{
	int g;

	if (!filename)
		return (-1);
	g = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (g == -1)
		return (-1);
	if (text_content)
		write(g, text_content, _strlen(text_content));
	close(g);
	return (1);
}
/**
 * _strlen - length of string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c])
		c++;
	return (c);
}
