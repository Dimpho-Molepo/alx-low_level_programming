#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates a character in a string.
 * @s: The string to be searched.
 * @c: The character to be located.
 *
 * Return: If c is found - a pointer to the first occurence.
 *         If c is not found - NULL.
 */
char *_strchr(char *s, char c)
{
	unsigned int index;

	for (index = 0; s[index]; index++)
	{
		if (s[index] == c)
			return (s + index);
		else
			return (NULL);
	}
	return ('\0');
}
