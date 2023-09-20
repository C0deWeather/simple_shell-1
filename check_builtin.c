#include "shell.h"

int check_builtin(char **usr_input)
{
	int i;
	char **builtin;

	builtin = {"env", "exit", "setenv", "unsetenv", "cd", NULL};
	for (i = 0; builtin[i]; i++)
		if (_strcmp(usr_input[0], builtin[i - 1]) == 0)
		{
			built
		i++;


}
