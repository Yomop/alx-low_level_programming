#include "main.h"

/**
 * _strcpy - copy a string
 * @dest: destinationvalue
 * @src: source value
 * Return: the poiter yo destination
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\n'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
