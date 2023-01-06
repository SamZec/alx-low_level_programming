#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * _sqrt - Finds the natural square root of an inputted number.
 * @_num: The number to find the square root of.
 * @root: The root to be tested.
 *
 * Return: the number natural square root otherwise -1.
 */
int _sqrt(int _num, int root)
{
	if ((root * root) == _num)
		return (root);

	if (root == _num / 2)
		return (-1);

	return (_sqrt(_num, root + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to return the square root of.
 *
 * Return: n natural square root otherwise -1.
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (_sqrt(n, root));
}
