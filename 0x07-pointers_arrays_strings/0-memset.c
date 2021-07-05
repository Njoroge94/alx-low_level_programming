#include <string.h>
#include "holberton.h"
/**
 *_memset - fills the first n bytes of the memory area pointed by @s with the
 *constant byte @c
 *@s: a pointer to the memory area to be filled
 *@b: the character to fill the memory are
 *@n: the number of bytes to be filled
 *Return: A pointer to the filled memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *memory = s, value = b;

	for (i = 0; i < n; i++)
	{
		memory[1] = value;
	}
	return (memory);
}
