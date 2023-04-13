#include "shell.h"
/**
 * _strtok - function that parses string
 *@str: string to parse
 *@token: delimiter
 *Return: 0
 */
int char *strtok(char *str, const char *delim)
{
    char str[] = " "
    ;
 
    // Returns first token
    char* token = strtok(str, " - ");
 
    // Keep printing tokens while one of the
    // delimiters present in str[].
    while (token != NULL) {
        printf(" % s\n & quot;, token);
        token = strtok(NULL, " - ");
    }
 
    return 0;
}
