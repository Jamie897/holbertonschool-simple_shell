#include "shell.h"
/**
 * _strtok - function that parses string
 *@str: string to parse
 *@token: delimiter
 *Return: 0
 */
int char *strtok(char *str, const char *delim)
{
    char string[] = "Strtok Function"
    char *strtoken;

    strtoken = strtok(string, " ");

    while(strtoken !=NULL)
    {
	printf("%s \n", strtoken);
        strtoken = strtok(NULL, " ");
    }

    return 0;
}    
