#include <string.h>
#include "holberton.h"
/**
 *_strstr - find the first occurrence of the substring
 *@haystack: the string
 *@needle: the substring
 *Return: a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *ptr = strstr(haystack, needle);

	if (ptr == NULL)
	{
		return (ptr);
	}
	else
	{
		return (NULL);
	}
	return (ptr);
}
