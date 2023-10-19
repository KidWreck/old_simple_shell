#include "shell.h"
/**
 * _path - handle the path
 * @argv: argument
 * @klam: command
 * Return: command
 */
char *_path(char **argv, char *klam)
{
	char *pa;

	pa = malloc(_strlen("/bin/") + _strlen(klam) + 1);
	if (!pa)
	{
		return (NULL);
	}
	_cpy(pa, "/bin/");

	if (klam[0] != '/' && klam[0] != '.')
	{
		argv[0] = _cat(pa, klam);
		return (argv[0]);
	}
	free(pa);
	return (klam);
}
