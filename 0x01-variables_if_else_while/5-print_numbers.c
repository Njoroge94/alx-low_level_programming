#include <stdio.h>
#include <unistd.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	int no;

	for (no = 0; no < 10; no++)
	{
		printf("%d", no);
	}
	printf("\n");
	return (0);
}
