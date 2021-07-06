#include <string.h>
#include "holberton.h"
/**
 *_memcpy - copy bytes from a memory area @src to a memory area @dest
 *@dest: the destination object
 *@src: the source object
 *@n: the number of bytes to be copied
 *Return: the pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *theDest = (char *)dest;
	const char *theSrc = (const char *)src;

	if ((theDest != NULL) && (theSrc != NULL))
	{
		while (n)
		{
			*(theDest++) = *(theSrc++);
			--n;
		}
	}
	return (dest);
}
