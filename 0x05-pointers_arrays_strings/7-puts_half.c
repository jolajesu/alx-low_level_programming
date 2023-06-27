#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - Prints the second half of a string, followed by a new line.
 *
 * @str: The string to print.
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int start_index = (length + 1) / 2;

	for (int i = start_index; i < length; i++)
	{
		printf("%c", str[i]);
	}

	printf("\n");
}
