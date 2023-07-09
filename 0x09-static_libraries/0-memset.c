#include "main.h"

/**
 * _memset - a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: the dired vale
 * @n: number of bytes yo be changed
 * Return: changed array with new valuefor n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
