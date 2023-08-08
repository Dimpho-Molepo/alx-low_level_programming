#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Copies a string to new allocated space in memory
 *
 * @str: The string to be copied
 *
 * Return: Pointer to allocated memory containing copy of @str (SUCCESS)
 * OR NULL if @str is empty (FAILURE) OR
 * NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *m_alloc;
	unsigned int i;
	unsigned int length_of_string = 0;

	if (str == NULL)
		return ('\0');

	while (*(str + length_of_string) != '\0')
		length_of_string++;

	length_of_string++;

	m_alloc = malloc(sizeof(*str) * length_of_string);

	if (m_alloc == NULL)
		return ('\0');

	for (i = 0; i < length_of_string; i++)
		m_alloc[i] = *(str + i);

	m_alloc[i] = '\0';
	return (m_alloc);
}
