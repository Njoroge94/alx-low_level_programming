#include <unistd.h>
#include "holberton.h"
/**
 *_isupper - checking for uppercases
 *@c: the element
 *Return: Always 0 (success)
 */
int _isupper(int c)
{
	int thecase;

	if (c >= 'A' && c <= 'Z')
	{
		thecase = 1;
	}
	else
	{
		thecase = 0;
	}
	return (thecase);
}
