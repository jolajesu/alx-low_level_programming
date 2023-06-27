#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcpy - Copies a string from src to dest, including the null byte.
 *
 * @dest: The destination buffer.
 * @src: The source string.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	if (dest == NULL || src == NULL)
		return (NULL);

	char *ptr;

	ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (ptr);
}
