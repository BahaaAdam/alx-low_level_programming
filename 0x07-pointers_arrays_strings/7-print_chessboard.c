#include "main.h"

/**
 * print_chessboard - a function that prints a chessboard
 * @a: array
 * Return: 0 (success)
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][i]);
		}
		_putchar('\n');
	}

}
