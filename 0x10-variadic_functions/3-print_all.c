#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 *print_all - printing everything
 *@format:the list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	char *str;
	int numbers;
	float f;
	char ch;
	int i = 0;

	va_list(anything);
	va_start(anything, format);

	while (i < va_arg(anything, int))
	{
		if (*format == 'i')
		{
			numbers = va_arg(anything, int);
			printf("%d", numbers);
		}
		else if (*format == 'c')
		{
			ch = va_arg(anything, int);
			printf("%c", (char)ch);
		}
		else if (*format == 'f')
		{
			f = va_arg(anything, double);
			printf("%f", (float)f);
		}
		else if (*format == 's')
		{
			str = va_arg(anything, char *);

			if (str == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", str);
			}
		}
		++i;
	}
	va_end(anything);
	putchar('\n');
}
