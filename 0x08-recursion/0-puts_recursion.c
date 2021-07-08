#include <string.h>
#include "holberton.h"
/**
 *_puts_recursion - prints a string using recursion
 *@s: the string
 */
void _puts_recursion(char *s)
{
	int length = strlen(s);
	int i = 0;
	int new = 1;

	if (i == length)
	{
		return;
	}
	_putchar(s[i]);
	_puts_recursion(s + 1);
}
