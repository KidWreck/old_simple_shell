#include "shell.h"
/**
 * _cpy - copy
 * @dest: dest
 * @src: src
 * Return: string
 */
char *_cpy(char *dest, char *src)
{
	int i, len = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
