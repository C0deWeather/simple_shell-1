#include "shell.h"

int main(int ac, char **argv, char **envp)
{
	(void)ac;
	(void)argv;
	char *name = "PATH";
	char *value = get_env(name, envp);
	printf("%s", value);
	return (0);
}
