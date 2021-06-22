#include <unistd.h>
#include "holberton.h"
/**
 *print_alphabet_x10 - alphabets 10 times
 */
void print_alphabet_x10(void)
{
	int count;
	int ch;

	for (count = 0; count <= 10; count++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
