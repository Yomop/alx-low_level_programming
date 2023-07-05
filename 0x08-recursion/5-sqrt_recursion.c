#include "main.h"

int actual_sqrt_recursion(int a, int b);

/**
 * _sqrt_recursion - Return the natural square root of a number
 * @a: Number to calculate the square root of
 * Return: The square root
 */
int _sqrt_recursion(int a)
{
	if (a < 0)
		return (-1);
	return (actual_sqrt_recursion(a, 0));
}

/**
 * actual_sqrt_recursion - Recurse to find the natural square root of a number
 * @a: Number to calculate the square root of
 * @b: iterator
 * Return: The square root
 */
int actual_sqrt_recursion(int a, int b)
{
	if (b * b > a)
		return (-1);
	if (b * b == a)
		return (b);
	return (actual_sqrt_recursion(a, b + 1));
}
