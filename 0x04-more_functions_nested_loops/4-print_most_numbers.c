#include <unistd.h>
#include "holberton.h"
/**
 *print_most_numbers - some numbers
 */
void print_most_numbers(void)
{
	int no;

	for (no = 0; no <= 9; no++)
	{
		if (no != 2 && no != 4)
		{
			_putchar(no + '0');
		}
	}
	_putchar('\n');
}
