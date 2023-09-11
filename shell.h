#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int sh_prompt(char **argv, char **env);
char **parse_line(char *line);

#endif
