#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
/**
 *  main - Entry point
 *  Return: Always 0 (Success)
 */
int main(void)
{
	int w;

	w = write(STDOUT_FILENO, "\" -\n", 1);
	if (w < 0)
	{
		perror("Writing error: ");
	}
	return (1);
}
