#include "shell.h"

int is_a_path(const char *cmd)
{
	if (access(cmd, F_OK) == -1)
		return (1);
	else
		return (0);
}
