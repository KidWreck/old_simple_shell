#include "shell.h"
/**
 * _strncpy - copy
 * @dest: dest
 * @src: src
 * @h: int
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int h)
{
	int i;

	for (i = 0; i < h && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < h; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}

/**
 * _strlen - len
 * @s: string
 * Return: len
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strncat - Concantenates
 * @dest: dest
 * @src: src
 * @h: pointer
 * Return: dest
 */
char *_strncat(char *dest, const char *src, size_t h)
{
	size_t dest_l = _strlen(dest);
	size_t i;

	for (i = 0; i < h && src[i] != '\0'; i++)
		dest[dest_l + i] = src[i];
	dest[dest_l + i] = '\0';

	return (dest);
}
