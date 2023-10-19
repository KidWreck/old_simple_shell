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

extern char **environ;

void prompt(char **argv, char **envh, bool f);
int _cmp(char *s1, char *s2, int h);
char *_cpy(char *dest, char *src);
void _exit(char *klam);
void _sig(int n);
int _len(int h);
char *_itoa(int h);
void geterr(denum *h, char **argv, char *klam)
