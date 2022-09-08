#include <stdio.h>
#include <unistd.h>
/**
 *  main - Entry point
 *  Return: Always 0 (Success)
 */
int main(void)
{
	int w;
write(2, "and that piece of art is useful\"- Dora Korpar, 2015-10-19\n", 59);
if (w < 0)
{
	perror("Writing error: ");
}
return (1);
}
