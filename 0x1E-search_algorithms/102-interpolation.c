#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * interpolation_search -  a function that searches for a value in a
 *		sorted array of integers using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 *
 * Return: first index where value is located otherwise -1 If value is
 *		not present in array or if array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low = 0, high = size - 1, point;

	if (array != NULL && size != 0)
	{
		while (array[high] != array[low] && value >= array[low] &&
				value <= array[high])
		{
			point = low + ((value - array[low]) * (high - low) /
					(array[high] - array[low]));
			printf("Value checked array[%d] = [%d]\n",
					point, array[point]);
			if (array[point] < value)
				low = point + 1;
			else if (array[point] > value)
				high = point - 1;
			else
				return (point);
		}
		if (array[low] == value)
			return (low);
		point = low + ((value - array[low]) * (high - low) /
				(array[high] - array[low]));
		printf("Value checked array[%d] is out of range\n", point);
	}
	return (-1);
}
