#include "shell.h"

/**
 * main - Entry point for the simple shell project
 * @argc: argument count variable
 * @argv: argument vector to store pointer to string inputs
 * @env: the environment variable
 * Return: Alway 0 (succes)
 */
int main(int argc, char **argv, char **envp)
{
	char *name = "PATH";
	char *PATH = get_env(name, envp);
	hsh_loop();;
	/** 
	 * <<<<<< CALL PARSER HERE >>>>>>
	 * <<< USER INPUT IS NOW IN cmd_buff dynamically >>>
	 */
	
	free(cmd_buff);
	cmd_buff = NULL;
	return (0);
}
