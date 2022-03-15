#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char word = 'a';

	for (word = 'a'; word <= 'z'; word++)
		putchar(word);
	putchar('\n');

	return (0);
}
