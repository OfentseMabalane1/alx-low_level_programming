#include <stdio.h>

#include <ctype.h>
/**
 * main - Entry point
 * a program that prints the alphabet in lowercase, followed by a new line
 * Return: Always 0 (success)
 */

int main(void)
{
int alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
alphabet = tolower(alphabet);
putchar(alphabet);
}
putchar('\n');
return (0);
}
