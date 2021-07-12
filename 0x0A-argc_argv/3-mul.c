#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entry point
 *@argc: the number of command line arguments
 *@argv: the array arguments
 *Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i, mult = 1;

	if (argc > 1)
	{
		for(i = 1; i < argc; i++)
		{
			mult = mult * atoi(argv[i]);
		}
		printf("%d\n", mult);
	}
	else if (argc <= 1)
	{
		printf("Error\n");
	}
	return 0;
}
