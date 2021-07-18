#include <stdio.h>
#include "holberton.h"
/**
 *print_triangle - a triangle
 *@size: size of the triangle
 */
void print_triangle(int size)
{
	int i, k, j;
	int count = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			count++;

			for (k = 0; k < (size - count); k++)
			{
				_putchar(' ');
			}

			for (j = 0; j < count; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
