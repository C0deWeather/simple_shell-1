#include "shell.h"

/**
 * main - Entry point for the simple shell project
 * @argc: argument count variable
 * @argv: argument vector to store pointer to string inputs
 * @env: the environment variable
 * Return: Alway 0 (succes)
 */
int main(int argc, char **argv, char **env)
{
	 extern char *PATH = "/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin";
	hsh_loop();;
	/** 
	 * <<<<<< CALL PARSER HERE >>>>>>
	 * <<< USER INPUT IS NOW IN cmd_buff dynamically >>>
	 */
	
	free(cmd_buff);
	cmd_buff = NULL;
	return (0);
}
