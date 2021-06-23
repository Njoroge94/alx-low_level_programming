#include <unistd.h>
#include "holberton.h"
/**
 *print_last_digit - displaying the last digit of a number
 *
 *@r: the number
 *Return: Always 0 (success)
 */
int print_last_digit(int r)
{
	int last;

	last = r % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	return (last);
}
