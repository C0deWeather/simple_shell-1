#include "shell.h"

/**
 * exit - exits the shell program
 * @usr_input - array of strings containing user's input
 */
void exit(container value)
{
	char **args;
	int i = 0;

	if (valid.usr_input[i + 1] == NULL)
	{
		free(valid.usr_input);
		exit(EXIT_SUCCESS);
	}


	/*count arguments entered
	for (i = 0; value.usr_input[i + 1] != NULL; i++)
	{
		if (isnum(value.usr_input[i + 1]) == 0)
		{
			args[i] = value.usr_input[count];
			i++;
		}
		else
			_printf("%s: %d: %s: %s", value.p_path, value.i, value.usr_input[0], "illegal argument"); 
	}
	args[i] = NULL;
*/
}
