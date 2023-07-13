#include <stdio.h>
#include "search_algos.h"

int binary_recur(int *array, size_t left, size_t right, int value);

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
	size_t left = 0, right = 0;

	if (array == NULL && size == 0)
		return (-1);
	right = size - 1;
	return (binary_recur(array, left, right, value));
}

/**
 * binary_recur - search for a value in a sorted array base on
 *			Binary search algorithm recursively
 * @array: pointer to the first element of the array to search in
 * @left: lower boundry of array
 * @right: upper boundry of array
 * @value: value to search for
 *
 * Return: index to leftmost value otherwise -1
 */
int binary_recur(int *array, size_t left, size_t right, int value)
{
	size_t mid, i;

	if (right < left)
		return (-1);
	printf("Searching in array: ");
	for (i = left; i < right; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[i]);
	if (array[left] == value)
		return (left);
	mid = (left + right) / 2;
	if (array[mid] < value)
		return (binary_recur(array, mid + 1, right, value));
	return (binary_recur(array, left, mid, value));
}
