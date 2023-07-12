#include "search_algos.h"
#include <stdio.h>
#include <math.h>
/**
 * jump_search - a function that searches for a value in a sorted
 *		array of integers using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: first index where value is located otherwise -1
 *		if array is NULL or value is not present in array
 */
int jump_search(int *array, size_t size, int value)
{
	size_t low, high, i, block = 0;

	low = 0;
	high = block = sqrt(size);
	if (array != NULL)
	{
		while (low < size)
		{
			printf("Value checked array[%ld] = [%d]\n",
					low, array[low]);
			if (value <= array[high])
				break;
			if (array[high] <= value)
			{
				if (high > size - 1)
					break;
			}
			low = high;
			high += block;
		}
		printf("Value found between indexes [%ld] and [%ld]\n",
				low, high);
		for (i = low; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n",
					i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}
	return (-1);
}
