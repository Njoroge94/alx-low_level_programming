#include "holberton.h"
#include <ctype.h>
/**
 *_islower - checking for lowercases
 *
 *Return: Always 0 (success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
	_putchar('\n');
	return (0);
}
