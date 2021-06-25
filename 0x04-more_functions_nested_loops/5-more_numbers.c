#include <unistd.h>
#include "holberton.h"
/**
 *more_numbers - to 14
 */
void more_numbers(void)
{
	int no;
	int count, ch;

	for (count = 0; count < 10; count++)
	{
		for (no = 0; no < 10; no++)
		{
			if (no > 9)
			{
				_putchar(1 + '0')
				_putchar(no % 10);
		}
		_putchar('\n');
	}
}
