#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

int binary_s(int *array, int value, int left, int right);

/**
 * exponential_search - a function that searches for a value in a sorted array
 *		of integers using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located otherwise -1
 *		If value is not present in array or if array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t left = 0, right = 1;

	if (array != NULL && size != 0)
	{
		while (right < size && array[right] < value)
		{
			printf("Value checked array[%ld] = [%d]\n",
					right, array[right]);
			left = right;
			right *= 2;
		}
		if (right >= size)
			right = size - 1;
		printf("Value found between indexes [%ld] and [%ld]\n",
				left, right);
		return (binary_s(array, value, left, right));
	}
	return (-1);
}

/**
 * binary_s -  a function that searches for a value in a sorted
 *                      array of integers using the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @value: value to search for
 * @left: lower array boundry
 * @right: upper array boundry
 *
 * Return: index where value is located otherwise - 1
 *		if value is not present in array.
 */
int binary_s(int *array, int value, int left, int right)
{
	size_t i = left, n = right, mid = 0;

	if (array != NULL)
	{
		while (left <= right)
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
			else if (array[mid] > value)
			{
				right = mid - 1;
				i = left;
				n = right;
			}
			else
				return (mid);
		}
	}
	return (-1);
}
