#include "shell.h"

/**
 * parse_line - split input string into tokens
 * @line: input string
 * 
 * Return: returns a pointer to the array of tokens, otherwise NULL.
*/
token parse_line(char *line)
{
	int i = 0;
	char delimiter[] = " ";
	char **tokens = malloc(2 * sizeof(char*));

	/*check if dynamic memory allocation was successful*/
	if (tokens == NULL)
	{
		perror("Dynamic memory allocation failed!");
		return (usr_input);
	}
	if (line == NULL)
	{
		perror("Input line cannot be NULL!");
		return (usr_input);
	}
	/*tokenize line*/
	tokens[i] = strtok(line, delimiter);
	while (tokens[i] != NULL)
	{
		i++;
		tokens = realloc(tokens, (i + 1) * sizeof(char *));
		if (tokens == NULL)
		{
			perror("Dynamic memory allocation failed!");
			return (usr_input);
		}
		tokens[i] = strtok(NULL, delimiter);
	}
	return (usr_input);
}
