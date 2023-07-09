#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * main - print the sum of positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int n, sum = 0;
	char *b;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			b = argv[i];
			for (n = 0; n < strlen(b); n++)
			{
				if (b[n] < 48 || b[n] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(b);
			b++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
