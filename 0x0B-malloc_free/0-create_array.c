#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of size size and assgines char c
 * @size : size of array
 * @c : char
 * Return: pointer to array or to Null
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == Null)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
