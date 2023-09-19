#include "shell.h"

int main(void)
{
	int i = 0;
	char line[] = "In this example, fprintf is used to write the error message to stderr. Using stderr for error messages helps in distinguishing them from regular program output and makes it easier to identify and handle errors during program execution.";
	char **usr_input;

	usr_input = parse_line(line);
	
	printf("Command: %s\tArguments: ", usr_input[i]);
	
	for (i = 1; usr_input[i] != NULL; i++)
		printf("%s ", usr_input[i]);
	putchar('\n');
	free(usr_input);
	return (0);
}

