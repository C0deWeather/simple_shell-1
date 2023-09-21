#include "shell.h"

/**
 * main - Entry point for the simple shell project
 * @argc: argument count variable
 * @argv: argument vector to store pointer to string inputs
 * @env: the environment variable
 * Return: Alway 0 (succes)
 */
int main(int ac, char **av)
{
	if (ac == 1)
		hsh_loop(av[0]);
	return (0);
}
