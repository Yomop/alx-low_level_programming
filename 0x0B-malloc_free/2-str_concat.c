#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenate two string of any size
 * @s1: input value
 * @s2: input value
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *k;
	int a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	a = b = 0;

	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;
	k = malloc(sizeof(char) * (a + b + 1));
	if (k == NULL)
		return (NULL);
	a = b = 0;
	while (s1[a] != '\0')
	{
		k[a] = s1[a];
		a++;
	}
	while (s2[b] != '\0')
	{
		k[a] = s2[b];
		a++, b++;
	}
	k[a] = '\0';
	return (k);
}
