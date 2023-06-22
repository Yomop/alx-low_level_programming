#include "main.h"

/**
 * _isalpha - check for alphabets
 * @C: character to be checked
 *
 * Return: 1 if character is a letter, 0 otherwise
 */
int _isapha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
