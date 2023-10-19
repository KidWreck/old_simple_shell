#include "shell.h"
/**
 * _cmp - compare
 * @s1: first string
 * @s2: second string
 * @h: number of byte
 * Return: string
 */

int _cmp(char *s1, char *s2, int h)
{
	if (!h)
		return (0);
	if (*s1 == *s2)
		return (*s1 ? _cmp(s1 + 1, s2 + 1, h - 1) : 0);
	if (*s1)
		return (1);
	if (*s2)
		return (-1);
	return (*s1 - *s2);
}
