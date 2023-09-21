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
#include <sys/wait.h>
#include <sys/stat.h>

extern char **environ;
char **parse_line(char *line);
void hsh_loop(char *prg_path);
int read_line(char **cmd_buff);
void print_prompt(char *prompt);
char *find_exe(char *cmd);
char *_strcat(char *s1, char *s2);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
char *_strdup(char *str);
char *_strcpy(char *dest, char *src);
int _strncmp(char *s1, char *s2, int n);
char *get_env(char *name);
int cmd_exec(char **input);
void builtin_env(char **line);
int is_a_path(const char *cmd);
void builtin_exit(void);
int check_builtin(char **line);
int _putchar(int c);
int _puts(char *str);

#endif
