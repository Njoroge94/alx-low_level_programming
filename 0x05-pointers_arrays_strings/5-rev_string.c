#include <unistd.h>
#include <string.h>
#include "holberton.h"
/**
 *rev_string - reversing a string
 *@s: the string
 */
void rev_string(char *s)
{
	int i;

	int length = strlen(s);
	int count = 1;

	for (i = 0; i <= length; i++)
	{
		write(1, s[length - count], length);
		count++;
	}
	_putchar('\n');
}
