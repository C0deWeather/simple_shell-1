#include "shell.h"

/**
 * builtin_env - Responsible for printing current envi
 * @str: parameter taken to check for added args
 */
void builtin_env(char **str)
{
	char **env;

	if (str[1])
		printf("env: '%s': No such file or directory", str[1]);
	else
	{
		for (env = environ; *env; env++)
			printf("%s\n", *env);
	}
}
