#include "shell.h"
/**
 * _cat - appends
 * @dest: dest
 * @src: src
 * Return: dest
 */
char *_cat(char *dest, char *src)
{
	int len = 0, l = 0, i;

	while (src[len] != '\0')
	{
		len++;
	}
	while (dest[l] != '\0')
	{
		l++;
	}
	for (i = 0; i < len; i++)
	{
		dest[l + i] = src[i];
	}
	dest[l + len] = '\0';
	return (dest);
}
