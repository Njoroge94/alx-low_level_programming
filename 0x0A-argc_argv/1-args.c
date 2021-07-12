#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entry point
 *@argc: the number of commandline arguments
 *@argv: array of string with the arguments
 *Return: Always 0 (succes)
 */
int main(int argc, char *argv[])
{
	printf("%d\n", (argc - 1));
	(void)argv;

	return (0);
}
