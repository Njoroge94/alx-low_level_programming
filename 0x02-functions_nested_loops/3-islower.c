#include "holberton.h"
#include <ctype.h>
/**
 *_islower - checking for lowercases
 *@c: what we are checking if its lowercase
 *Return: - prints the if its lower
 */
int _islower(int c)
{
	int letter;
	/*code*/
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
