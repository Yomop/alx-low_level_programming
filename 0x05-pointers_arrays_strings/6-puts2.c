#include "main.h"

/**
 * puts2 - prints one character our of two
 * @str: The string to be printed
 * Return: print
 */

void puts2(char *str)
{

	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
