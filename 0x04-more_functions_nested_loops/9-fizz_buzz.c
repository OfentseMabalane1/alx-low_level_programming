#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * but for multiples of three prints Fizz instead of the number
 * and for the multiples of five prints Buzz
 * Return: Always 0 (Success)
 */
int main(void)
{
	int f;

	for (f = 1; f <= 100; f++)
	{
		if (f % 3 == 0 && f % 5 != 0)
		{
			printf(" Fizz");
		} else if (f % 5 == 0 && f % 3 != 0)
		{
			printf(" Buzz");
		} else if (f % 3 == 0 && f % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (f == 1)
		{
			printf("%d", i);
		} else
		{
			printf(" %d", i);
		}
	}
	printf("\n");

	return (0);
}
