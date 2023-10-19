#include "shell.h"
/**
 * _run - run command
 * @r: argument
 * @argv: argument
 * @envp: argument
 */
void _run(char **r, char **argv, char **envp)
{
	pid_t child;
	int x;

	child = fork();
	if (child == -1)
	{
		perror("ERROR!!");
		exit(EXIT_FAILURE);
	}
	if (child == 0)
	{

		if (execve(r[0], r, envp) == (-1))
		{
			write(STDOUT_FILENO, argv[0], _strlen(argv[0]));
			write(STDOUT_FILENO, ": No such file or directory",
			_strlen(": No such file or directory"));
			write(STDOUT_FILENO, "\n", 1);
		}
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(&x);
	}
}
