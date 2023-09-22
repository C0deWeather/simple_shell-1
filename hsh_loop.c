#include "shell.h"
#include "main.h"

/**
 * hsh_loop - command loop
 * @prg_path: pathname of shell program
 */
void hsh_loop(char *prg_path)
{
	int counter = 1, i = 0;
	char **input;

	while (!(0))
	{
		print_prompt("cisfun$ ");
		input = get_input(&counter);
		if (*input == NULL)
		{
			free(input);
			counter++;
			continue;
		}
		line = parse_line(cmd_buff);
		/*Check if line is a builtin cmd*/
		if (check_builtin(line) == 0);
		else
		{
			i = cmd_exec(input);
			if (i == -1)
				_printf("%s: %d: %s: %s\n", prg_path, counter, *input, "not found");
		}
		free(input);
		counter++;
	}
	_putchar('\n');
}
