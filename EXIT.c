#include "shell.h"
/**
 * _exit - terminate the prog
 * @klam: command
 */
void _exit(char *klam)
{
	if (_cmp("exit", klam) == 0)
	{
		free(klam);
		exit(EXIT_SUCCESS);
	}
}
