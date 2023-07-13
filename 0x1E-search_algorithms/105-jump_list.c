#include "search_algos.h"
#include <stdio.h>
#include <math.h>

listint_t *print_check(listint_t *list, size_t left, size_t right,
		size_t size, int value);

/**
 * jump_list - a function that searches for a value in a sorted list
 *		of integers using the Jump search algorithm.
 * @list: pointer to the head of the list to search in
 * @size: number of nodes in list
 * @value: value to search for
 *
 * Return: pointer to the first node where value is located otherwise NULL
 *		If value is not present in head or if head is NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *low = list, *high = list;
	size_t block, level;

	level = block = sqrt(size);
	if (list != NULL && size != 0)
	{
		while (block != 0)
		{
			high = high->next;
			block--;
		}
		while (low->index < size)
		{
			printf("Value checked array[%ld] = [%d]\n",
				high->index, high->n);
			if (value <= high->n)
				break;
			if (high->n < value && high->index >= size - 1)
				break;
			low = high;
			level += sqrt(size);
			for (block = low->index; block < level; block++)
			{
				if (high->next == NULL)
					break;
				high = high->next;
			}
		}
		return (print_check(low, low->index,
					high->index, size, value));
	}
	return (NULL);
}

/**
 * print_check - print the values at index of list when comparing with value
 * @list: poiter to first node
 * @left: lower boundry of list
 * @right: upper boundry of list
 * @size: size of list
 * @value: value to compare
 *
 * Return: poiter to value found otherwise NULL
 */
listint_t *print_check(listint_t *list, size_t left, size_t right,
		size_t size, int value)
{
	printf("Value found between indexes [%ld] and [%ld]\n",
			left, right);
	for (; list->index < size; list = list->next)
	{
		printf("Value checked at index [%ld] = [%d]\n",
				list->index, list->n);
		if (list->next == NULL)
			break;
		if (list->n == value)
			return (list);
	}
	return (NULL);
}
