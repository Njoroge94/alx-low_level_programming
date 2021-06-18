#include <stdio.h>
#include <unistd.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	int i;

	int gap = 2;
	for (i = 0; i < 90; i++)
	{
		if (i % 10 == 0)
		{
			i = i + gap;
			gap++;
		}
		putchar((i / 10) + '0');
		putchar((i % 10) + '0');
		if (i == 89)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
