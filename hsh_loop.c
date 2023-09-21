#include "shell.h"

/**
 * hsh_loop - command loop
 * @prg_path: pathname of shell program
 */
void hsh_loop(char *prg_path)
{
	char *cmd_buff = NULL;
	int status = 0, counter = 1, i = 0;
	char **line;
	/*container state;*/

	while (!(0))
	{
		if (isatty(STDIN_FILENO))
			print_prompt("cisfun$ ");
		status = read_line(&cmd_buff);
		if (status == -1)
		{
			perror("Getline has failed");
			free(cmd_buff);
			break;
		}
		if (*cmd_buff == '\0')
		{
			free(cmd_buff);
			counter++;
			continue;
		}
		line = parse_line(cmd_buff);

		/*Check if line is a builtin cmd*/
		if (check_builtin(line) == 0)
			;
		else
		{
			i = cmd_exec(line);
			if (i == -1)
				printf("%s: %d: %s: %s\n", prg_path, counter, *line, "not found");
		}
		free(line);
		free(cmd_buff);
		counter++;
	}
	_putchar('\n');
}
