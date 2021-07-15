#include <stdio.h>
#include <stdlib.h>
/**
 *malloc_checked - put memory
 *@b: the size
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);

	free (p);
}
