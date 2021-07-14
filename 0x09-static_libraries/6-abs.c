#include <unistd.h>
#include "holberton.h"
/**
 *_abs - the absolute value function
 *@r: the number
 *Return: Always 0 (success)
 */
int _abs(int r)
{
	int ab;

	if (r >= 0)
	{
		ab = r;
	}
	else if (r < 0)
	{
		ab = r * -1;
	}
	return (ab);
}
