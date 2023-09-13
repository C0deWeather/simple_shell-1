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
	while (argv[0] && argc)
	{
		sh_prompt(argv, env);
	}
	return (0);
}
