#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: takes width of array
 * @height: takes height os array
 *
 * Return: array of integers otherwise NULL
 */
int **alloc_grid(int width, int height)
{
	int **ptr_arr;
	int ar_width, ar_height;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr_arr = malloc(sizeof(int *) * height);
	if (ptr_arr == NULL)
		return (NULL);
	for (ar_height = 0; ar_height < height; ar_height++)
	{
		ptr_arr[ar_height] = malloc(sizeof(int) * width);
		if (ptr_arr[ar_height] == NULL)
		{
			for (; ar_height >= 0; ar_height--)
				free(ptr_arr[ar_height]);
			free(ptr_arr);
			return (NULL);
		}
	}
	for (ar_height = 0; ar_height < height; ar_height++)
	{
		for (ar_width = 0; ar_width < width; ar_width++)
			ptr_arr[ar_height][ar_width] = 0;
	}
	return (ptr_arr);
}
