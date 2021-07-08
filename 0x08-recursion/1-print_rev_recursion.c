#include "holberton.h"
/**
 *_print_rev_recursion - print a string in reverse
 *@s: the string
 */
void _print_rev_recursion(char *s)
{
	int start;
	int end;
	char ch;

	if (start >= end)
	{
		return;
	}
	ch = *(s + start);
	*(s + start) = *(s + end);
	*(s + end) = ch;

	_print_rev_recursion(s, ++start, --end);
}
