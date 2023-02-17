#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 * a program that prints the alphabet in lowercase
 * and then in uppercase, followed by a new line.
 * Return: Always 0 (success)
 */
int main(void)
{
int alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
alphabet = tolower(alphabet);
putchar(alphabet);
if (alphabet == 'z')
{
alphabet = 'A';
for (; alphabet <= 'Z'; alphabet++)
{
putchar(alphabet);
}
break;
}
}
putchar('\n');
return (0);
}
