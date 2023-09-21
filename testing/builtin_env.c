#include "shell.h"

/**
 * _puts - Would print string passed to it
 * @str_input: The string taken as parameter
 */
void _puts(char *str_input)
{
	int i = 0;

	for (i = 0; str_input[i]; i++)
		_putchar(str_input[i]);
}

/**
 * builtin_env - Responsible for printing current env
 */
void builtin_env(void)
{
	char **env;

	for (env = environ; *env; env++)
	{
		_puts(*env);
		_putchar('\n');
	}
}
