#include "shell.h"
/**
 * cmd_exec - resposible for cmd execution in forked process
 * @input: Array of strings taken as input
 * Return: will return 0 upon success and 1 upon failure
 */
int cmd_exec(char **input)
{
	char *abs_path;
	pid_t pid;
	int status;
	char **env;

	env = environ;
	abs_path = find_exe(*input);
	if (abs_path == NULL)
		return (-1);
	pid = fork();
	if (pid == -1)
	{
		perror("failure creating process");
		return (1);
	}
	if (pid == 0)
	{
		if (execve(abs_path, input, env) == -1)
		{
			perror("argv[0]: ");
			return (1);
		}
	}
	if (!(pid <= 0))
		wait(&status);
	return (0);
}
