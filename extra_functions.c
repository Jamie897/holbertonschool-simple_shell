#include "shell.h"
/**
 *main - main function
 *Return: Always(0)
 */
int status = 1;
char *line = NULL, **argv;

signal(SIGINT, sig_handler);

while (status)
{
    if (isatty(STDIN_FILENO))
    {
        _prompt();
    }

    line = _getline();

    if (!line) // check for NULL pointer
    {
        break;
    }

    if (line[0] == '\n')
    {
        free(line);
        continue;
    }

    argv = _strtok(line, DELIMIT);

    if (!argv) // check for NULL pointer
    {
        free(line);
        continue;
    }

    status = _path_command(argv);

    free_array(argv);
    free(line);
}

return (0);
