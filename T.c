#include "shell.h"
/**
 * tr - remove space
 * @klam: comand
 * Return: command
 */
char *tr(char *klam)
{
	char *c;
	int i = 0, len;

	while (klam[i] == ' ')
		i++;
	len = _strlen(klam) - i + 1;
	c = malloc(len + 1);
	if (!c)
	{
		perror("ERROR\n");
		return (NULL);
	}
	_strncpy(c, klam + i, len);
	c[len] = '\0';
	_cpy(klam, c);
	free(c);
	return (klam);
}

/**
 * _cmp - compare
 * @s1: function
 * @s2: function
 * Return: cmp
 */
int _cmp(char *s1, char *s2)
{
	int cmp = 0;

	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	if (s1 != s2)
		cmp = *s1 - *s2;

	return (cmp);
}
