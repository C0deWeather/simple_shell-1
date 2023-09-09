#include "shell.h"

/**
  *sh_prompt - Prompt display with cmd line respnse and behavior
 * @argv: Argument vector parameter fed by main function
 * @env: Environment variable passed from main function
 * Return: Always 0 (success)
 */
int sh_prompt(char **argv __attribute__((unused)), char **env __attribute__((unused)))
{
	int i;
	size_t n;
	ssize_t get;
	char *usr_cmd = NULL;

	(void)argv;
	(void)env;
	n = 0;
	while (!(0))
	{
		/**
		 * Creating the prompt and waiting for user input
		 */
		printf("cisfun$: ");
		get = getline(&usr_cmd, &n, stdin);

		/**
		 * Handling getline failure
		 */
		if (get == -1)
		{
			perror("Getline has failed");
			free(usr_cmd);
			return (1);
		}
		i = 0;

		/**
		 * Taking out the newline character added
		 * by the getline function
		 */
		while (usr_cmd[i])
		{
			if (usr_cmd[i] == '\n')
			{
				usr_cmd[i] = '\0';
				break;
			}
			i++;
		}
	}
	return (0);
}
