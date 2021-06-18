#include <stdio.h>
#include <unistd.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 0; ch < 10; ch++)
	{
		putchar(ch + '0');
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
