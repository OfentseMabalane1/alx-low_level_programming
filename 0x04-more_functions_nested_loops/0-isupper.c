#include "main.h"

/**
 * main -Entry point
 * isupper() function
 * Return 1 if c is UPPERCASE
 * return 0 otherwise
 */

int _isupper(int c)
{
	if ((c = 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
