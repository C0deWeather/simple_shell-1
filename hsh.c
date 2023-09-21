#include "shell.h"

/**
 * main - Entry point for the simple shell project
 * @ac: argument count variable
 * @av: argument vector to store pointer to string inputs
 * Return: Alway 0 (succes)
 */
int main(int ac, char **av)
{
	/*Non-interactive mode*/

	/*Interactive mode*/
	if (ac == 1)
		hsh_loop(av[0]);
	return (0);
}
