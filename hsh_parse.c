#include "shell.h"

/**
 * parse_line - split input string into tokens
 * @line: input string
 *
 * Return: returns a pointer to the array of tokens, otherwise NULL.
*/
char **parse_line(char *line)
{
	int i = 0;
	char delimiter[] = " ";
	char **tokens = malloc(2 * sizeof(char *));

	/*check if dynamic memory allocation was successful*/
	if (tokens == NULL)
	{
		fprintf(stderr, "Dynamic memory allocation failed!\n");
		return (NULL);
	}
	if (line == NULL)
	{
		fprintf(stderr, "Input line cannot be NULL!\n");
		return (NULL);
	}
	/*tokenize line*/
	tokens[i] = strtok(line, delimiter);
	while (tokens[i] != NULL)
	{
		i++;
		tokens = realloc(tokens, (i + 1) * sizeof(char *));
		if (tokens == NULL)
		{
			fprintf(stderr, "Dynamic memory allocation failed!\n");
			return (NULL);
		}
		tokens[i] = strtok(NULL, delimiter);
	}
	return (tokens);
}

