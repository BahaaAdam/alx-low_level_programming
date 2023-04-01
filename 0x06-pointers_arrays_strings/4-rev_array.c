#include "main.h"

/*
 * reverse_array - function that reverses an array of ints
 * @a : int
 * @n : int
 * Return: 0 (success)
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}