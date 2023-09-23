#include "shell.h"

/**
 * cmd_exec - executes a command
 * @input: array of strings containing user input cmd and args
 *
 * Return: 0 on success, otherwise -1.
 */
int cmd_exec(char **input)
{
	char *abs_path;
	pid_t pid;
	int status;
	char **env;

	env = environ;

	if (is_a_path(*input) == 0)
		abs_path = _strdup(*input);
	else
		abs_path = find_exe(*input);

	if (abs_path == NULL)
		return (-1);

	pid = fork();
	if (pid == -1)
	{
		perror("fork process failed");
		return (-1);
	}
	else if (pid == 0)
	{
		if (execve(abs_path, input, env) == -1)
		{
			perror("execve failed");
			 exit(EXIT_FAILURE);
		}
	}
	if (pid > 0)
		wait(&status);
	free(abs_path);
	return (0);
}
