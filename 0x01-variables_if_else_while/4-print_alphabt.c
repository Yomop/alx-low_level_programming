#include <stdio.h>

/**
 * main - prints a number in loercase
 * followed by a new line, expect q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		if (low != 'e' && low != 'q')
			putchar(low);
	}
	putchar('\n');
	return (0);
}
