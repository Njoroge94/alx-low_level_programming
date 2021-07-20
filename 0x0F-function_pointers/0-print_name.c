#include <stddef.h>
#include "function_pointers.h"
/**
 *print_name - function to print a name
 *@name: the name
 *@f: pointer to a functio
 *Return: (void)
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		(*f)(name);
}
