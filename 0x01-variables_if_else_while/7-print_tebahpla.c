#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 * a program that prints the lowercase alphabet in reverse
 * followed by a newline
 * Return: Always 0 (success)
 */
int main(void)
{
	int letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
