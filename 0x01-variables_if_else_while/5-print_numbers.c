#include <unistd.h>
#include <stdio.h>

/**
 * main - Entry point
 * a program that prints all single digit numbers of base 10 starting from 0
 * followed by a newline.
 * Return 0 (Success)
 */

#include <unistd.h>

void  numbers(void)
{
    int num;

    num = '0';
    while (num <= '9')
    {
      write(1, &num, 1);
      num++;
    }
    return (0);
}

int main(void)
{
	return (0);
}
