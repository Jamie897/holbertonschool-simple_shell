#include "shell.h"
/**
 * _getline - function that used to read a string or a line
 * @string: string to be printed
 * @size: size of string
 * @bytes_read: reader
 * Return: 0
 */
ssize_t _getline(char **string, size_t *size)
{
    ssize_t bytes_read;
    bytes_read = getline(string, size, stdin);
    if (bytes_read == -1)
    {
        puts("ERROR!");
        free(*string);
    }
    return bytes_read;
}

#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
/**
 * _signal - function to handle signal
 * Return: 0
 */
void sig_handler 
{
    printf("SIGINT signal\n");
}

int _signal(void)
{
        signal(SIGINT, sigint_handler);

        while (1)
        {
                sleep(1);
        }

        return (0);
}
