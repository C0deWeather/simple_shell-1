#include "main.h"
/**
 * cmd_exec - resposible for cmd execution in forked process
 * @usr_input: token type of data taken as parameter
 * @abs_path: the environment variable passed through main
 * Return: will return 0 upon success and 1 upon failure
 * Do not forget to free temp_cmd buffer
 */
int cmd_exec(char abs_path, token usr_input)
{
	pid_t pid;
	int status;
	char **temp_cmd = malloc(sizeof(usr_input));

	*temp_cmd[] = {usr_input.cmd, NULL};
	for (i = 0, usr_input.args[i], i++)
		temp_cmd[i + 1] = usr_input.args[i];

	pid = fork();
	if (pid == -1)
	{
		perror("failure creating process");
		return (1);
	}
	if (pid == 0)
	{
		if (execve(abs_path, temp_cmd, NULL) == -1)
		{
			perror("argv[0]: ");
			return (1);
		}
	}
	if (!(pid <= 0))
	{
		wait(&status);
	}
	return (0);
}
