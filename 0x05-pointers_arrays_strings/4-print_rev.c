#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - Prints a string in reverse followed by a new line.
 *
 * @str: The string to be printed.
 *
 * Return: None.
 */

void print_rev(char *str)
{

	int length = strlen(str);
	int i;

	for (i = length - 1; i >= 0; i--)
	{
		putchar(str[i]);
	}

	putchar('\n');

}

