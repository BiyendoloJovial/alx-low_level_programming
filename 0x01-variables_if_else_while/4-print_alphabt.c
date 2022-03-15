#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char word = 'a';

	for (word = 'a'; word <= 'z'; word++)
	{
		if (word != 'q' && word != 'e')
		{
			putchar(word);
		}
	}

	putchar('\n');

	return (0);
}
