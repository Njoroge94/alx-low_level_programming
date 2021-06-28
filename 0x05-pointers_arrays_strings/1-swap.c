#include "holberton.h"
/**
 *swap_int - swapping the values of two integers
 *@a: - integer one
 *@b: integer two
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
