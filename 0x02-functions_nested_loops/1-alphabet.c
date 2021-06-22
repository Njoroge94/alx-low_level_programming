#include <unistd.h>
#include "holberton.h"
/**
 *print_alphabet - prints the alphabet in lowercase, followed by a newline
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
