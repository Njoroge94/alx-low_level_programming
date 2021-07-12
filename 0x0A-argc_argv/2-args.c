#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entry point
 *@argc: the count of command line arguments
 *@argv: array of string of command line argu,ents passed
 *Return: Always success (0)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
