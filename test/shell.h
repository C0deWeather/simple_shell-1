#ifndef SHELL_H
#define SHELL_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#include <dirent.h>

char **parse_line(char *line);
char **parse(char *str);
void hsh_loop(void);
void read_line(char **cmd_buff);
int print_prompt(char *prompt);
char *find_exe(char *cmd);
char *_strcat(char *s1, char *s2);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
char *_strdup(char *str);
char *_strcpy(char *dest, char *src);

#endif

