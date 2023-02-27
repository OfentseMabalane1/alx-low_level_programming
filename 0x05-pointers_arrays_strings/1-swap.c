#include <stdio.h>

/**
 * 1-swap - Swaps the values of the two integers.
 * @a: The first integer to be swapped
 * @b: The second integer to be swapped
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
// the function that swaps the value of 2 ints
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
