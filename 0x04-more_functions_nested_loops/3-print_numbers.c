#include <unistd.h>
#include "holberton.h"
/**
 *print_numbers - digits drop
 */
void print_numbers(void)
{
	int no;

	for (no = 0; no <= 9; no++)
	{
		_putchar(no + '0');
	}
	_putchar('\n');
}
