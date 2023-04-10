#include "main.h"

/**
 * clear_bit - return bit at given index
 * @n: number to read
 * @index: location of bit to find
 *
 * Return: bit at given index
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int catch = 1;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	catch <<= index;
	*n &= ~catch;

	return (1);
}

