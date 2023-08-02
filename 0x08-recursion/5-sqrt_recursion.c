#include "main.h"

/**
 * _sqrt_ - helper function for _sqrt_recursion
 * @n: number
 * @i: incrementer
 *
 * Return: natural square root of n
 */
int _sqrt_(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt_(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 *
 * Return: natural square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_(n, 0));
}
