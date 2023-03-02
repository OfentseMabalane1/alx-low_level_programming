#include "main.h"
/**
 * reverse_array - revereses an array.
 * @a: pointer to array.
 * @n: number of elements of an array.
 *
 * Return: void.
 */

void reverse_array(int *a, int n)
{
	int temp, increase;

	n = n - 1;
	increase = 0;
	while (increase <= n)
	{
		temp = a[increase];
		a[increase++] = a[n];
		a[n--] = temp;
	}
}
