#include "main.h"

/**
 * reverse_array - reverses elements of an array
 * @a: array
 * @n: number of elements in an array
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i =0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
