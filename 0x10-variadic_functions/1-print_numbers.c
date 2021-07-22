#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 *print_numbers - printing integers
 *@separator: comma
 *@n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	int i;
	int integers;

	va_start(numbers, n);

	for (i = 0; i < (int)n; i++)
	{
		integers = va_arg(numbers, int);
		printf("%d", integers);

		if (i < ((int)n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(numbers);
	putchar('\n');
}
