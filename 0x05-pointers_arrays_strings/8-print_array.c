#include <stdio.h>
#include "holberton.h"
/**
 *print_array - printing array elements
 *@a: the array
 *@n: number of elements in the array to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i == (n - 1))
		{
			break;
		}
		printf(", ");
	}
	printf("\n");
}
