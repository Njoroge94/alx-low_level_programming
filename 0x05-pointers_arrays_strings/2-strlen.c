#include "holberton.h"
/**
 *_strlen - the length of a string
 *@s: the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
