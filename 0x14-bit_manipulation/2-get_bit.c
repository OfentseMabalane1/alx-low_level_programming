#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @num: number which contains the bit
 * @index: index at which bit must be found
 *
 * Return: bit (Success) or -1 (error)
 */

int get_bit(unsigned long int num, unsigned int index)
{
	/*int bit;*/

	if (index > sizeof(num) * 8)
		return (-1);

	num >>= index;
	return (1 & num);
}
