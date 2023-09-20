#include "shell.h"

/**
 * hsh_loop - command loop
 */
void hsh_loop(void)
{
	char *cmd_buff = NULL;
	int status = 0;
	char **line;

	while(!(0))
	{
		print_prompt("cisfun$ ");
		status = read_line(&cmd_buff);
		/*End-of-file condition*/
		if (status == -1)
		{
			free(cmd_buff);
			break;
		}
		if (*cmd_buff == '\0')
		{
			free(cmd_buff);
			continue;
		}
		line = parse_line(cmd_buff);

  	/*<<<<< Added line start here >>>>>>*/
		if (!(check_builtin()))
			;
		else
		{
	/*<<<<< Added line ends here >>>>>*/
		cmd_exec(line);
		}
		free(cmd_buff);
		free(line);
	}
	_putchar('\n');
}

