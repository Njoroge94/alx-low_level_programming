#include <stdio.h>
/**
 *op_add - sum of 2
 *op_sub - difference of 2
 *op_mul - product of 2
 *op_div - devision 0f 2
 *op_mod - modulous of 2
 *@a: the first
 *@b: the second
 *Return: Always 0 (success)
 */
int op_add(int a, int b)
{
	return a + b;
}

int op_sub(int a, int b)
{
	return a - b;
}

int op_mul(int a, int b)
{
	return a * b;
}

int op_div(int a, int b)
{
	return a / b;
}

int op_mod(int a, int b);
{
	return a % b;
}
