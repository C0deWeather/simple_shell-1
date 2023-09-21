#include "shell.h"
/**
 * builtin_exec - Would toggle any of the builtin and call it
 * @line: The array of string entered by the user
 * @actual_case: The respective builtin to be executed
 */

void builtin_exec(char **line, int actual_case)
{
	switch (actual_case)
	{
		case 0:
			/*call env*/
			builtin_env(line);
			break;
		case 1:
			/*call exit*/
			break;
		case 2:
			/*call setenv*/
			break;
		case 3:
			/*call unsetenv*/
			break;
		case 4:
			/*call cd*/
			break;
		default:
			break;
	}
}

/**
 * check_builtin - will compare line or input with list of builtin
 * if it matches, then it executes the corresponing builtin
 *
 * @line: parameter taken by the check_builtin function
 *
 * Return: returns 0 on success, otherwise it returns 1.
 */
int check_builtin(char **line)
{
	int i;
	char *builtin[] = {"env", "exit", "setenv", "unsetenv", "cd", NULL};
	for (i = 0; builtin[i]; i++)
	{
		if (builtin[i] == NULL)
			return (1);
		if (_strcmp(line[0], builtin[i]) == 0)
		{
			builtin_exec(line, i);
			break;
		}
	}
	return (0);
}
