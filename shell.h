#ifndef SHELL_H
#define SHELL_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <dirent.h>

/**
 * token - represents information about an input line from user
 * 
 * @cmd: command entered by user
 * @args: argumennts passed to command
*/
typedef struct token
{
	char *cmd;
	char **args;
} token;

extern char *PATH;
token parse_line(char *line);
char **parse(char *str);
void hsh_loop(void);
int print_prompt(char *prompt);
char *find_exe(char *cmd);
char *_strcat(char *s1, char *s2);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
char *_strdup(char *str);
char *_strcpy(char *dest, char *src);

#endif

