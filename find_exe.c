#include "main.h"
#include <dirent.h>
#include <stdio.h>

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: returns 0 if the strings match, and -1 otherwise.
 */
int _strcmp(char *s1, char *s2)
{
	int status = -1;

	if (strlen(s1) != strlen(s2))
	{
		printf("Error: length mismatch!\t");
		return (status);
	}

	while (*s1 || *s2)
	{
		if (*s1 != *s2)
		{
			printf("Error: strings do not match!\t");
			status = -1;
			break;
		}
		else
			status = 0;
		s1++;
		s2++;
	}
	return (status);
}

/**
 * _strcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: returns a pointer to a dynamically allocated
 * memory containing the concatenated string, otherwise NULL. 
 */
char *_strcat(char *s1, char *s2)
{
	int i = 0;
	char *cat_str = malloc(strlen(s1) + strlen(s2) + 1);

	if (!s1 || !s2 || !cat_str)
		return (NULL);

	while (*s1)
	{
		cat_str[i] = *s1;
		i++;
		s1++;
	}
	while (*s2)
	{
		cat_str[i] = *s2;
		i++;
		s2++;
	}
	cat_str[i] = '\0';
	return (cat_str);
}

/**
 * find_exe - searches for an executable in the PATH
 * @cmd: name of executable
 * 
 * Return: On success, returns pathname of executable, otherwise NULL. 
*/
char *find_exe(char *cmd)
{
	char *dir, *value;
	DIR *dir_stream;
	struct dirent *entry;

	/*Get and tokenize PATH*/
	value = getenv("PATH");
	if (value == NULL)
	{
		/*Handle error accordingly*/
	}
	dir = strtok(value, ":");
	/*open and read directory*/
	while (!dir)
	{
		dir_stream = opendir(dir);
		while ((entry = readdir(dir_stream)) != NULL)
		{
			if (_strcmp(entry->d_name, cmd) == 0)
			{
				dir[strlen(dir) - 1] = '/'; /*append '/' to dir*/
				return (_strcat(dir, cmd));
			}
		}
		dir = strtok(NULL, ":");
	}
	closedir(dir_stream);
	return (NULL);
}
