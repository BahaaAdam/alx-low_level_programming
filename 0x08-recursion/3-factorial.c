#include "main.h"

/**
 * factorial - a function to calculate the factorial for a number
 * @n: int
 * Return: 0 (success)
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
