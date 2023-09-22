#include "shell.h"
#include "main.h"
/**
 * cmd_exec - resposible for cmd execution in forked process
 * @input: Array of strings taken as input
 * Return: will return 0 upon success and -1 upon failure
 */
int cmd_exec(char **input)
{
	char *abs_path;
	pid_t pid;
	int status, i;
	char **env;
	char *cmd_list[] = {NULL, NULL};

	env = environ;
	if (is_a_path(input[0]) == 0)
		abs_path = input[0];
	else
		abs_path = find_exe(*input);

	if (abs_path == NULL)
		return (-1);

	cmd_list[0] = abs_path;
	for (i = 0; input[i]; i++)
		cmd_list[i + 1] = input[i];
	pid = fork();
	if (pid == -1)
	{
		perror("fork process failed");
		return (-1);
	}
	else if (pid == 0)
	{
		if (execve(abs_path, cmd_list, env) == -1)
			return (-1);
	}
	if (pid > 0)
		wait(&status);
	free(abs_path);

	return (0);
}
