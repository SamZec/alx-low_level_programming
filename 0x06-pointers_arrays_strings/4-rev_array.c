#include "main.h"

/**
 * reverse_array - reverse arrays of integers
 * @a: takes the array
 * @n: takes array size
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, hld;

	for (i = n - 1; i >= n / 2; i--)
	{
		hld = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = hld;
	}
}
