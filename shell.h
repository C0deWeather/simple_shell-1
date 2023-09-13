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

token parse_line(char *line);
char **parse(char *str);
void hsh_loop(void);
int print_prompt(char *prompt);

#endif
