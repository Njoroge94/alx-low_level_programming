#include <string.h>
#include "holberton.h"
/**
 *print_rev - printing a string in reverse
 *@s: the string
 */
void print_rev(char *s)
{
	int i;

	int count = 0;
	int length = strlen(s);

	for (i = 0; i <= length; i++)
	{
		_putchar(s[length-count]);
		count++;
	}
	_putchar('\n');
}
