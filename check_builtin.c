#include "shell.h"

void builtin_exec(char **usr_in, int position)
{
	switch (position)
	{
		case 0:
			/*call env*/
			builtin_env(usr_in);
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

/**
 * check_builtin - will compare usr cmd with list of builtin
 * if it matches, then it executes the corresponing builtin
 *
 * @usr_input: parameter taken by the check_builtin function
 *
 * Return: returns 0 on success, otherwise it returns 1.
 */
int check_builtin(char **usr_input)
{
	int i;
	char **builtin;

	builtin = {"env", "exit", "setenv", "unsetenv", "cd", NULL};
	for (i = 0; builtin[i]; i++)
	{
		if (builtin[i] == NULL)
			return (1);
		if (_strcmp(usr_input[0], builtin[i]) == 0)
		{
			builtin_exec(usr_input, i);
			return (0);
		}
	}
}
