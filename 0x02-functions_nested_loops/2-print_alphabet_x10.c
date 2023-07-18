#include "main.h"

/**
 * main - check the code.
 * Prints alphabets x10 times
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char letter;
	for (int count = 0; count <= 9; count++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
