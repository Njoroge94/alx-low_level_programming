#include <string.h>
#include <stdio.h>
#include "holberton.h"
/**
 *_strchr - scan for a character in a string
 *@s: the string to scan
 *@c: the character to scan
 *Return: the pointer to the first occurence of the character c
 */
char *_strchr(char *s, char c)
{
	if (*s == c)
	{
		return (s);
	} while (*s++);

	return (0);
}
