#include <unistd.h>
#include <string.h>
#include "holberton.h"
/**
 *_puts - printing a string to stdout
 *@str: the string
 */
void _puts(char *str)
{
	write(1, str, strlen(str));
	_putchar('\n');
}
