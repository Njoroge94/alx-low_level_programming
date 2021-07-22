#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 *print_strings - printing strings
 *@separator: the comma
 *@n: the number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	int i;
	char *ch;

	va_start(str, n);

	for (i = 0; i < (int)n; i++)
	{
		ch = va_arg(str, char *);

		if (ch == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", ch);
		}

		if (i < ((int)n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(str);
	putchar('\n');
}
