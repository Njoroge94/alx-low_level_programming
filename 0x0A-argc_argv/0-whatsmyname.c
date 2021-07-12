#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 *main - entry point
 *@argc: counts the number of arguments
 *@argv: the string of arrays that contains whats passed as arguments
 *Return: Always 0 (success)
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
