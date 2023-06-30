#include "main.h"
#include <unistd.h>

/**
 * -putchar - writes the character c to stdout
 *  @C: the character to print
 *
 *  Return: On success 1
 */
int _purchar(char c)
{
	return (write(1, &c, 1));
}
