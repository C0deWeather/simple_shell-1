#include "shell.h"

int is_a_path(const char *cmd)
{
	struct stat stat_buff;

	if (stat(cmd, &stat_buff) == 0)
	{
		if (access(cmd, F_OK) != -1)
			return (0);
	}
	else
		return (1);
	return (0);
}
