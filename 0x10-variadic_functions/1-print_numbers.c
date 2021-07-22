#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 *print_numbers - printing integers
 *@sparator: comma
 *@n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i;

	va_start(ap, n);

	for (i = (int)n; i >= 0; i = va_arg(ap, int))
	{
		printf("%d", i);

		if (separator == NULL)
		{
		}
		else
		{
			if (i == ((int)n - 1))
			{
				break;
			}
			printf(",");
		}
		va_end(ap);
	}
	putchar('\n');
}
