#include "main.h"

/**
 * _pow_recursion - a function that gives the power of two ints
 * @x: base int
 * @y: power int
 * Return: power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
