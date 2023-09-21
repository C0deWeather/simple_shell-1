#include "shell.h"

/**
 * _puts - Would print string passed to it
 * @str_input: The string taken as parameter
 *
void _puts(char *str_input)
{
	int i = 0;

	for (i = 0; str_input[i]; i++)
		_putchar(str_input[i]);
}
*/

/**
 * builtin_env - Responsible for printing current env
 */
void builtin_env(char **str)
{
	char **env;
	int i'
	if (str[i + 1])
		_printf("env: '%s': No such file or directory", str[1]);
	else
	{
		for (env = environ; *env; env++)
		_printf("%s\n", *env);
	}
}
