#include <string.h>
#include "holberton.h"
/**
 *_strspn - gets the length of a prefix substring
 *@s: the string
 *@accept: bytes
 *Return: number of bytes in the initial segement
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	if ((s == NULL) || (accept == NULL))
	{
		return (len);
	}
	while (*s && strchr(accept, *s++))
	{
		len++;
	}
	return (len);
}
