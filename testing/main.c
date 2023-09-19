#include "shell.h"

int main(void)
{
	char *name = "PATH";

	char *PATH = get_env(name);
	printf("%s", PATH);
	return (0);
}
