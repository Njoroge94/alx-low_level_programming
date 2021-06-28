#include <string.h>
#include "holberton.h"
/**
 *puts2 - printing every other character
 *@str: the string
 */
void puts2(char *str)
{
	int i;

	int length = strlen(str);
	int count = length;

	for (i = 0; i < length; i++)
	{
		_putchar(str[length - count]);
		count = count - 2;

		if (count == 0)
		{
			break;
		}
	}
	_putchar('\n');
}
