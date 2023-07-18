#include "main.h"

/**
 * main - check the code.
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int count;
	char letter;

	for (count = 0; count <= 9; count++)

	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
