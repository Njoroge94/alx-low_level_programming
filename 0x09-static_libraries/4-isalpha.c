#include "holberton.h"
#include <ctype.h>
/**
 *_isalpha - checking for alphabets
 *
 *@c: element we are checking to see of its a alphabet
 *Return: Always 0 (success)
 */
int _isalpha(int c)
{
	int letter;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		letter = 1;
	}
	else
	{
		letter = 0;
	}
	return (letter);
}
