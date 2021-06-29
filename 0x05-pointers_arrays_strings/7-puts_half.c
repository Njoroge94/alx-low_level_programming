#include <string.h>
#include "holberton.h"
/**
 *puts_half - half of a string
 *@str: the string
 */
void puts_half(char *str)
{
	int i;

	int length = strlen(str);
	int mid = length / 2;
	int forward = 0;

	if (length % 2 == 0)
	{
		for (i = 0; i < mid; i++)
		{
			_putchar(str[mid + forward]);
			forward++;
		}
		_putchar('\n');
	}
	else if (length % 2 != 0)
	{
		int mid = (length - 1) / 2;
		int oddforward = 1;

		for (i = 0; i < mid; i++)
		{
			_putchar(str[mid + oddforward]);
			oddforward++;
		}
		_putchar('\n');
	}
}
