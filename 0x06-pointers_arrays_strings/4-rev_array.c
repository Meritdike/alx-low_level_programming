#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int index, i, j;

	index = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		j = a[i];
		a[i] = a[index];
		a[index--] = j;
	}
}
