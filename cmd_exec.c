#include "main.h"
/**
 * cmd_exec - resposible for cmd execution in forked process
 * usr_input: token type of data taken as parameter
 * Do not forget to free temp_cmd buffer
 */
int cmd_exec(char usr_input)
{
	pid_t pid;
	int status;
	char **temp_cmd = malloc(sizeof(usr_input));

	*temp_cmd[] = {usr_input.cmd, NULL};
	for (i = 1, usr_input.args, i++)
		temp_cmd[i] = usr_input.args[i - 1];
	
	pid = fork();
	if (pid == -1)
	{
		perror("failure creating process");
		return (1);
	}
	if (pid == 0)
	{
		if (execve(usr_input.cmd, temp_cmd, env) = -1)
		{
			perror("argv[0]: ");
			return (1);
		}
	}
	if (!(pid <=0))
	{
		wait(&status);
	}
	/**
	 * Remember to free temp_cmd
	 */
	return (0);
}
