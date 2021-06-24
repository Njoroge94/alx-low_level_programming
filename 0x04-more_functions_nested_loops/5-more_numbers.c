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
			_putchar(no + '0');
			for (ch = 'A'; ch < 'F'; ch++)
			{
				_putchar(ch);
			}
		}
		_putchar('\n');
	}
}
