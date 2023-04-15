#include "shell.h"
/**
 * _strtok - function that parses string
 *@str: string to parse
 *@token: delimiter
 *Return: 0
 */
int main(void)
{
	char string[] = "Strtok Function ";
	char *strtoken;

	char *copy = malloc(strlen(string) + 1);
	strcpy(copy, string);

	strtoken = strtok(copy, " ");
	
	while (strtoken != NULL)
	{
	printf("%s\n", strtoken);
	strtoken = strtok(NULL, " ");
	}

	free(copy);
	return (0);
}
