#include "shell.h"
#include "main.h"

/**
 * builtin_env - Responsible for printing current envi
 * @str: parameter taken to check for added args
 */
void builtin_env(char **str)
{
	char **env;
	int i;

	i = 0;
	if (str[i + 1])
		_printf("env: /'%s/M': No such file or directory", str[1]);
	else
	{
		for (env = environ; *env; env++)
			_printf("%s\n", *env);
	}
}
