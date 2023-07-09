#include "main.h"

/**
 * _strlen - length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int longdi = 0;

	while (*s != '\0')
	{
		longdi++;
		s++;
	}
	return (longdi);
}
