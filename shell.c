#include "shell.h"
/**
<<<<<<< HEAD
 * _getline - function that used to read a string or a line
 * Return: 0
 */
int _getline(void)
{
	char *string;
	size_t size;
	ssize_t bytes_read = 0;
	int q;

	string = (char *)malloc(size);
	if (bytes_read == -1)
	{
		puts("hsh");
	}
	else
		for (q = 0; q < 1; q++)
		{
			printf("$ ");
			bytes_read = getline(&string, &size, stdin);
		}
	return (0);
}
/**
 * _strtok - function that used to read a string or a line
 * Return: 0
 */
int _strtok(void)
{
	char *str = " ";
	char *token = strtok(str, " ");

	while (token != NULL)
	{
		printf("%s", token);
		token = strtok(NULL, " ");
	}
	return (0);
}
/**
* _fork - creating a new process
*Return: void
*/
void _fork(void)
{
	char *argv[] = {"/bin/ls", "-l", ".", NULL};

	pid_t pid = fork();

	if (pid == 0)
	{
		execve(argv[0], argv, NULL);
	}
	else
	{
		wait(NULL);
	}
}
/**
* sig_handler - checks if Ctrl C is pressed by the input
* @signum: int
*Return: void
*/
void sig_handler(int signum)
{

	if (signum == SIGINT)
	{
		write(STDOUT_FILENO, "\n$ ", 3);
	}
}
/**
 *main - main function
 *Return: Always(0)
 */
int main(void)
{
	int st = 1;

	signal(SIGINT, sig_handler);
	while (st)
		{
		_getline();
		_strtok();
		_fork();
		}
=======
* main - carries out the read, execute then print output loop
* @ac: argument count
* @av: argument vector
* @envp: environment vector
*
* Return: 0
*/

int main(int ac, char **av, char *envp[])
{
	char *line = NULL, *pathcommand = NULL, *path = NULL;
	size_t bufsize = 0;
	ssize_t linesize = 0;
	char **command = NULL, **paths = NULL;
	(void)envp, (void)av;
	if (ac < 1)
		return (-1);
	signal(SIGINT, handle_signal);
	while (1)
	{
		free_buffers(command);
		free_buffers(paths);
		free(pathcommand);
		prompt_user();
		linesize = getline(&line, &bufsize, stdin);
		if (linesize < 0)
			break;
		info.ln_count++;
		if (line[linesize - 1] == '\n')
			line[linesize - 1] = '\0';
		command = tokenizer(line);
		if (command == NULL || *command == NULL || **command == '\0')
			continue;
		if (checker(command, line))
			continue;
		path = find_path();
		paths = tokenizer(path);
		pathcommand = test_path(paths, command[0]);
		if (!pathcommand)
			perror(av[0]);
		else
			execution(pathcommand, command);
	}
	if (linesize < 0 && flags.interactive)
		write(STDERR_FILENO, "\n", 1);
	free(line);
>>>>>>> bdefcc393a34f3063f969fcfd00aded7469d0358
	return (0);
}
