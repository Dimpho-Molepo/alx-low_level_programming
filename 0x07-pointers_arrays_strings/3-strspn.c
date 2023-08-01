#include "main.h"
#include <string.h>

/**
 * *_strspn - gets the length of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters to match in s
 *
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int length = 0;
	int length_s = strlen(s);
	int length_accept = strlen(accept);

	for (i = 0; i < length_s; i++)
	{
		for (j = 0; j < length_accept; j++)
		{
			if (accept[j] == s[i])
				break;
		}

		if  (accept[j] == s[i])
			length++;
		else
			break;
	}
	return (length);
}
