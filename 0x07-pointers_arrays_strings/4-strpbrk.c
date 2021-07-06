#include <string.h>
#include "holberton.h"
/**
 *_strpbrk - a function that searches a string for any set of bytes
 *@s: the string
 *#accept: the bytes we are searching for
 *Return: a pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	if ((s == NULL) || (accept == NULL))
	{
		return (NULL);
	}
	while (*s)
	{
		if (strchr(accept, *s))
		{
			return (s);
		}
		else
		{
			s++;
		}
	}
	return (NULL);
}
