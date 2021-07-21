#include <stddef.h>
#include "function_pointers.h"
/**
 *array_iterator - run through array elements
 *@array: the array
 *@size: number of elements in the array
 *@action: the function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	while( i < size)
	{
		action(array[i]);
			i++;
	}
}
