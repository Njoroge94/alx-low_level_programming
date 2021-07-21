#include <stdio.h>
#include <stddef.h>
/**
 *get_op_func - get function
 *@s: the operator
 *Return: Always 0
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	if (*get_op_func("+"))
	{
		get_op_func = &(ops[0]);
	}
	else if (*get_op_func("-"))
	{
		get_op_func = &(ops[1]);
	}
	else if (*get_op_func("*"))
	{
		get_op_func = &(ops[2]);
	}
	else if (*get_op_func("/"))
	{
		get_op_func = &(ops[3]);
	}
	else if (*get_op_func("%"))
	{
		get_op_func = &(ops[4]);
	}
	else
	{
		return (NULL);
	}
}
