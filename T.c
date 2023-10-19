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
	if (!cp)
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
