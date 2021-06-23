#include <unistd.h>
#include "holberton.h"
/**
 *print_sign - printing a numbers sign (positive or negative)
 *
 *@n: the number we are checking
 *Return: Always 0 (success)
 */
int print_sign(int n)
{
	int sign;

	if (n > 0)
	{
		_putchar('+');
		sign = 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		sign = -1;
	}
	else
	{
		_putchar('0');
		sign = 0;
	}
	return (sign);
}
