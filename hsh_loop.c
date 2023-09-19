#include "shell.h"

/**
 * hsh_loop - command loop
 */
void hsh_loop(void)
{
	char *cmd_buff = NULL;
	int status = 0;

	while(!(0))
	{
		if (isatty(STDIN_FILENO))
			print_prompt("cisfun$ ");
		status = read_line(&cmd_buff);
		/*End-of-file condition*/
		if (status == -1)
		{
			/*Ctrl+d was pressed*/
			break;
		}
		line = parse_line(cmd_buff);

		/*Execute command*/	
	}
}

