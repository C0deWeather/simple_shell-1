#include "shell.h"

char *get_env(char *name, char *argv[])
{
	int i;
	char *var_line;

	for (i = 0; argv[i]; i++)
	{
		var_line = argv[i];
		/**
		 * Check if the argument is of the form "NAME=VALUE"
		 */
		if (_strncmp(var_line, name, _strlen(name)) == 0 && var_line[_strlen(name)] == '=')
			return (var_line + _strlen(name) + 1);
	}
	return (NULL);
}
