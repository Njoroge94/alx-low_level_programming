#include <unistd.h>
#include "holberton.h"
/**
 *_isdigit - checking for digits
 *@c: the element
 *Return: Always 0 (success)
 */
int _isdigit(int c)
{
	int digit;

	if (c >= '0' && c <= '9')
	{
		digit = 1;
	}
	else
	{
		digit = 0;
	}
	return (digit);
}
