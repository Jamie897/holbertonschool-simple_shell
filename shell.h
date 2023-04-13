#ifndef shell_h
#define shell_h
#include <stddef.h>
#include <sys/stat.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stddef.h>
extern char **environ;
#define DELIMIT " \t\r\n\a"
#define SIZE 1024
#define PATH_MAX 1020
int _getline(void);
int _strlen(char *s);
char _strdup(char *str);
int _strcmp(char *s1, char *s2);
int _strtok(void);
void _fork(void);
void sig_handler(int signum);
int _stat(int ac, char **av);
int _putchar(char c);
#endif
