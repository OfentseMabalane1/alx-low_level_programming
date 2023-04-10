#include"main.h"

/**
*set_bit - sets a specific bit at a particular position
*@n: the pointer to the bit being set
*@index:the position being referred to
*Return: 1 if success, -1 if fail
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int catch = 1 << index;

	if (index > sizeof(*n) * 8)
		return (-1);

	*n |= catch;
	return (1);
}
