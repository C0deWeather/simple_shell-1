#include "shell.h"

/**
 * builtin_exit - exits the shell program
 */
void builtin_exit(void)
{
	printf("Exiting the shell...\n");
	exit(EXIT_SUCCESS);
}
