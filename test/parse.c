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
		perror("Input line cannot be NULL!");
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

