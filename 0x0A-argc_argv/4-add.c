#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - Entry point
 *@argc: count of arguments in the commandline
 *@argv: the arguments passed in an array
 **Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("%d\n", 0);
	}
	return (0);
}
