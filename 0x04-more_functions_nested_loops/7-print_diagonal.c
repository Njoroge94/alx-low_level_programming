#include <unistd.h>
#include "holberton.h"
/**
 *print_diagonal - diagonal print
 *@n: loop range
 */
void print_diagonal(int n)
{
	int k, i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (k = 0; k <= i; k++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
