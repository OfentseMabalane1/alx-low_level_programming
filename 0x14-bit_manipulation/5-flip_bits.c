#include "main.h"

unsigned int get_length(unsigned long int num);
/**
 * flip_bits -  returns the number of bits to be flipped to get @m
 * @n: first number provided
 * @m: new number
 * Return: number of bits to be flipped
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = n ^ m;
	int res = 0;

	while (flip)
	{
		if (flip & 1)
			res++;
		flip >>= 1;
	}
	return (res);
}
