#include <unistd.h>
#include "holberton.h"
/**
 *print_line - lines
 *@n: loop range
 */
void print_line(int n)
{
	int count;

	if (n > 0)
	{
		for (count = 0; count < n; count++)
		{
			_putchar('_');
		}
		_putchar('\\');
		_putchar('n');
		_putchar('\n');
	}
	else
	{
		_putchar('\\');
		_putchar('n');
	}
	_putchar('\n');
}
