#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - Updates the value of an integer to 98.
 *
 * @p: Pointer to the integer to be updated.
 *
 * Return: No return (void).
 *
 */

void reset_to_98(int *p)
{
	int n;

	n = 12;
	*p = 98;

	printf("n=%d\n", n);
	printf("*p=%d\n", *p);

}
