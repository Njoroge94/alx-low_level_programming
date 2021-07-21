#include <stddef.h>
#include <ctype.h>
#include "function_pointers.h"
/**
 *int-index - function that searches for an integer
 *@array: the array
 *@size: number of elements in the array
 *@cmp: the function pointer
 *Return: Always 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
	{
		return (-1);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			if (isdigit(array[i]))
				{
					cmp(array[i]);
				}
				/**while (i < size)
		*{
		*	cmp(isdigit(array[i]));
		*	i++;*/
		}
	}
	return (cmp(array[i]));
}
