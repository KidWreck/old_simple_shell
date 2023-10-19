#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/type.h>
#include <signal.h>
#include <stdbool.h>
#define MAX 10

/**
 * struct denum - contains vars
 * @cnt: lines cnt
 */
typedef struct denum
{
	int cnt;
} denum;

extern char **environ;

void prompt(char **argv, char **envh, bool f);
void _run(char **r, char **argv, char **envp);
int _strncmp(char *s1, char *s2, int h);
char *_cpy(char *dest, char *src);
char *_strncpy(char *dest, char *src, int h);
char *_strncat(char *dest, const char *src, size_t h);
int _cmp(char *s1, char *s2)
int _strlen(char *s);
char *_cat(char *dest, char *src);
void _exit(char *klam);
char *_path(char **argv, char *klam)
void _sig(int n);
int _len(int h);
char *_itoa(int h);
void geterr(denum *h, char **argv, char *klam)
