#include "shell.h"

/**
 * parse_line - split input string into tokens
 * @line: input string
 *
 * Return: returns a pointer to a dynamically allocated
 * array of tokens, otherwise NULL.
*/
char **parse_line(char *line)
{
	int i = 0, count;
	char *temp_tok, *temp = _strdup(line);
	char **tokens;
	char delimiter[] = " ";

	if (line == NULL)
	{
		printf("input is NULL");
		return (NULL);
	}
	/*count tokens*/
	temp_tok = strtok(temp, delimiter);
	for (count = 1; temp_tok != NULL; count++)
		temp_tok = strtok(NULL, delimiter);

	/*tokenize line*/
	tokens = malloc((count + 1) * sizeof(char *));
	if (tokens == NULL)
	{
		perror("Dynamic memory allocation failed!");
		return (NULL);
	}
	tokens[i] = strtok(line, delimiter);
	while (tokens[i] != NULL)
	{
		i++;
		tokens[i] = strtok(NULL, delimiter);
	}
	free(temp);
	return (tokens);
}

/**
 * get_input - reads and parse input from user
 * @counter: pointer to an int that keeps track of loop runs
 *
 * Return: array of strings containing cmd entered
 * by user and its corresponding args, otherwise NULL.
 */
char **get_input(int *counter)
{
	char *cmd_buff = NULL;
	char **input;

	if (read_line(&cmd_buff) == -1)
	{
		free(cmd_buff);
		(*counter)++;
		_putchar('\n');
		exit(EXIT_SUCCESS);
	}
	if (*cmd_buff == '\0')
	{
		free(cmd_buff);
		return (NULL);
	}
	input = parse_line(cmd_buff);
	free(cmd_buff);
	return (input);
}
	


