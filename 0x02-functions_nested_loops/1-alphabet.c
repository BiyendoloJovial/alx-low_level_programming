#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char word;

	for (word = 'a'; word <= 'z'; word++)
		putchar(word);

	putchar('\n');
}
