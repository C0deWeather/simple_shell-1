#include "shell.h"

/**
 * read_line - Responsible for collecting the user input from stdin
 *
 * Description: The read_line function will also transfer the user input
 * into the cmd buffer passed to it by reference.
 * @cmd_buff: pointer to a dynamic memory for storing user input
 * Return: Will return -1 on failure or eof condition
 */
int read_line(char **cmd_buff)
{
	int i;
	size_t n;
	ssize_t get;

	/**
	 * Taking the user input
	 */
	n = 0;
	*cmd_buff = malloc(sizeof(char) * 50);
	get = getline(&(*cmd_buff), &n, stdin);

	/**
	 * Handling getline errors
	 */
	if (get == -1)
	{
		perror("Getline has failed");
		return (-1);
	}

	/**
	 * Handling the eof condition for getline
	 * by replacing '\n' with '\0'
	 */
	i = 0;
	while (*(*cmd_buff + i))
	{
		if (*(*cmd_buff + i) == '\n')
		{
			*(*cmd_buff + i) = '\0';
			break;
		}
		i++;
	}
	return (i);
}
