#include "shell.h"
/**
 * _strncmp - compare
 * @s1: string
 * @s2: string
 * @h: number
 * Return: string
 */

int _strncmp(char *s1, char *s2, int h)
{
	if (!h)
		return (0);
	if (*s1 == *s2)
		return (*s1 ? _strncmp(s1 + 1, s2 + 1, h - 1) : 0);
	if (*s1)
		return (1);
	if (*s2)
		return (-1);
	return (*s1 - *s2);
}
