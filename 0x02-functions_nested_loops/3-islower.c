#include "holberton.h"
#include <ctype.h>
/**
 *_islower - checking for lowercases
 *
 *Return: Always 0 (success)
 */
int _islower(int c)
{
	int letter;
	
	if (c >= 'a' && c <= 'z')
	{
		letter = 1;
	}
	else
	{
		letter = 0;
	}
	return (letter);
}
