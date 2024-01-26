#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

/**
 * infinite_while run- infinite while loop.
 *
 * Return: Always 0.
 */

int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * main- function creates 5 zombie processes.
 *
 * Return: Always 0.
 */

int main(void)
{
	pid_t child_pid;
	char i = 0;

	while (i = 0; i < 5; i++)
	{
		child_pid = fork();
		if (child_pid > 0)
		{
			printf("Zombie process created, PID: %d\n", child_pid);
			sleep(1);
		}
		else
			exit(0);
	}

	infinite_while();

	return (EXIT_SUCCESS);
}
