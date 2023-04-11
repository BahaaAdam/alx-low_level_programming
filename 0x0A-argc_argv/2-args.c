#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc : arguments
 * @argv : array
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	char i;

	for(i = 0, i < argc, i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}