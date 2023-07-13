#include <stdio.h>
#include "search_algos.h"
/**
 * advanced_binary -  a function that searches for a value in a sorted
 *			array of integers using the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located otherwise -1 if array is NULL
 *		or value is not present in array.
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t left, i, n, right = 0, mid = 0;

	n = right = size - 1;
	i = left = 0;
	if (array != NULL && size != 0)
	{
		while (left < right)
		{
			printf("Searching in array: ");
			for (; i <= n; i++)
			{
				printf("%d", array[i]);
				if (i != n)
					printf(", ");
			}
			printf("\n");
			mid = (left + right) / 2;
			if (array[mid] < value)
			{
				left = mid + 1;
				i = left;
				n = right;
			}
			else
			{
				right = mid;
				i = left;
				n = right;
			}
		}
		if (array[left] == value)
			return (left);
	}
	return (-1);
}
