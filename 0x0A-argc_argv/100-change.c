#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entry point
 *@argc: counting commandline arguments
 *@argv: the array
 *Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int amt, j, coin, rem;
	int changes[] = {25, 10, 5, 2, 1};
	int total = 0;

	amt = atoi(argv[1]);
	if (argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (amt <= 0)
	{
		printf("0\n");
	}
	else
	{
		for (j = 0; j < 5; j++)
		{
			if (amt >= changes [j])
			{
			        coin = amt / changes[j];
				rem = amt % changes[j];
				amt = rem;
				total += coin;
			}
		}
		printf("%d\n", total);
	}
	return (0);
}
