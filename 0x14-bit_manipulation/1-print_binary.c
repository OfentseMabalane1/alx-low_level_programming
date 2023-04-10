#include "main.h"

/**
 * print_binary - converts the decimal format number into binary
 * @n: decimal number
 *
 * Return;
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n) + '0');
}
