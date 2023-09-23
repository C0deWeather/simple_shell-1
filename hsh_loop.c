#include "shell.h"
#include "main.h"

/**
 * hsh_loop - command loop
 * @prg_path: pathname of shell program
 */
void hsh_loop(char *prg_path)
{
	int counter = 1, i = 0;
	char *cmd_buff = NULL;
	char **input;

	while (!(0))
	{
		print_prompt("cisfun$ ");
		input = get_input(&cmd_buff, &counter);
		if (input == NULL)
		{
			free(cmd_buff);
			counter++;
			continue;
		}
		if (*input == NULL)
		{
			free(input);
			free(cmd_buff);
			counter++;
			continue;
		}
		if (check_builtin(input, &cmd_buff) == 0)
			;
		else
		{
			i = cmd_exec(input);
			if (i == -1)
				_printf("%s: %d: %s: %s\n", prg_path, counter, *input, "not found");
		}
		free(input);
		free(cmd_buff);
		counter++;
	}
}
