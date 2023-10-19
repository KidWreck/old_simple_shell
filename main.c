#include "shell.h"
/**
 * main - main function
 * @ac: argument
 * @argv: argument
 * @envh: argument env
 * Return: 0
 */
int main(int ac, char **argv, char **envh)
{
	bool i = (ac == 1 && isatty(STDIN_FILENO));

	prompt(argv, envh, i);
	return (0);
}
