#include "main.h"

/**
 * print_line - draw a straight line in the terminal
 * @n: the number of lines to draw
 * Return: empty
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int k;

		for (k = 1; k <= n; k++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
