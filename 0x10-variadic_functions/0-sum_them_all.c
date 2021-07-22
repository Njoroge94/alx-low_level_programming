#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *sum_them_all - sum of all parameters
 *@n: the arguments
 *Return: return sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int nSum = 0;
	int i;

	if (n != 0)
	{
		va_list intArgPointer;
		va_start (intArgPointer, n);

		for (i = 0; i < (int)n; i++)
			nSum += va_arg(intArgPointer, int);
		va_end(intArgPointer);
	}
	else
	{
		return (0);
	}
	return (nSum);
}
