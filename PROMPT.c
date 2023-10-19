#include "shell.h"
/**
 * _sig - handler
 * @n: arg
 */
void _sig(int n)
{
	(void)n;
	write(STDOUT_FILENO, "\n$ ", _strlen("\n$ "));
}
/**
 * prompt - prompt
 * @argv: argument
 * @envh: envirement variable
 * @f: flag argument for mode
 */
void prompt(char **argv, char **envh, bool f)
{
	size_t n = 0;
	ssize_t num = 0;
	char *klam = NULL, *r[MAX];
	int i;

	while (1)
	{
		if (f && isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "$ ", _strlen("$ "));
		signal(SIGINT, _sig);
		num_c = getline(&klam, &n, stdin);
		if (num_c == -1) /*handles the end file case*/
		{
			free(klam);
			exit(EXIT_SUCCESS);
		}
		if (klam[num - 1] == '\n')
			klam[num - 1] = '\0';
		klam = trim(klam);
		if (_strlen(klam) == 0)
			continue;
		i = 0;
		r[x] = strtok(klam, " \n");
		_exit(klam);
		_path(r, klam);
		while (r[i])
		{
			i++;
			r[i] = strtok(NULL, " \n");
		}
		runcmd(r, argv, envh); /* envir */
	}
	free(klam);
}
