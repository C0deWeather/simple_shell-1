#include "shell.h"

/**
 * main - Entry point for the simple shell project
 * @argc: argument count variable
 * @argv: argument vector to store pointer to string inputs
 * @env: the environment variable
 * Return: Alway 0 (succes)
 */
int main(int argc, char **argv, char **envi __attribute__((unused)))
{
	char *cmd_buff = NULL;

	while (argv[0] && argc)
	{
		printf("cisfun$ ");
		read_line(&cmd_buff);
		/** 
		 * <<<<<< CALL PARSER HERE >>>>>>
		 * <<< USER INPUT IS NOW IN cmd_buff dynamically >>>
		 */
	}
	free(cmd_buff);
	cmd_buff = NULL;
	return (0);
}
