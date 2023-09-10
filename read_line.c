#include "shell.h"

/**
 * read_line - Responsible for collecting the user input from stdin
 *
 * Return: The strings entered by the user
 */
char read_line(void)
{
	int i;
	size_t n;
	ssize_t get;
	char *usr_cmd = NULL;

	n = 0;
	get = getline(&usr_cmd, &n, stdin);
	if (get == -1)
	{
		perror("Getline has failed");
		free(usr_cmd);
		return (char)1;
	}
	i = 0;
	while (usr_cmd[i])
	{
	if (usr_cmd[i] == '\n')
	{
		usr_cmd[i] = '\0';
		break;
	}
	i++;
	}
	return (*usr_cmd);
}
