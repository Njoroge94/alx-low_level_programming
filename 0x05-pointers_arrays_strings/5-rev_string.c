#include <string.h>
#include "holberton.h"
/**
 *rev_string - reversing a string
 *@s: the string
 */
void rev_string(char *s)
{
	int i;

	int length = strlen(s);
	int count = 1;
	/*int countforward = 0;*/

	for (i = 0; i <= length; i++)
	{
		/*_putchar(s[countforward]);*/
		_putchar(s[length - count]);
		count++;
	}
	_putchar('\n');
}
