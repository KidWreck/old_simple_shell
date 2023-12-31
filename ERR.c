#include "shell.h"
/**
 * _len - len
 * @h: int
 * Return: len
 */
int _len(int h)
{
	unsigned int i;
	int len = 1;

	if (h < 0)
	{
		len++;
		i = h * -1;
	}
	else
	{
		i = h;
	}
	while (i > 9)
	{
		len++;
		i = i / 10;
	}

	return (len);
}
/**
 * _itoa - a func
 * @h: param
 * Return: else or NULL.
 */
char *_itoa(int h)
{
	char *w;
	size_t  x;
	int len = _len(h);

	w = malloc(len + 1);
	if (!w)
	{
		return (NULL);
	}
	w[len] = '\0';
	if (h < 0)
	{
		x = h * -1;
		*w = '-';
	}
	else
		x = h;
	len--;

	do {
		*(w + len) = (x % 10) + '0';
		x /= 10;
		len--;
	} while (x > 0);
		return (w);
}
/**
 * geterr - errors
 * @h: argument
 * @argv: argument
 * @klam: command.
 *
 */
void geterr(denum *h, char **argv, char *klam)
{
	int len;
	char *msg, *s;

	s = _itoa(h->cnt);
	len = _strlen(argv[0]) + _strlen(klam) + _strlen(s) + 17;
	msg = malloc(len);
	if (!msg)
	{
		return;
	}
	_cpy(msg, argv[0]);
	_cat(msg, ": ");
	_cat(msg, s);
	_cat(msg, ": ");
	_cat(msg, klam);
	_cat(msg, ": ERROR\n");
	_cat(msg, "\0");
	write(STDOUT_FILENO, msg, len);
	free(msg);
}
