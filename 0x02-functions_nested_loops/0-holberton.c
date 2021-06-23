#include <unistd.h>
#include "holberton.h"
/**
 *main - Entry point"
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	write(1, "Holberton", 9);
	_putchar('\n');
	return (0);
}
