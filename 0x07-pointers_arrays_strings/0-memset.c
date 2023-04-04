#include "main.h"

/**
 * _memset - function to apoint memory for a certain char or int
 * @s : pointer to buffer
 * @b : the desired char
 * @n : number of bytes changed
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *i = s;

	while (n--)
	{
		*i++ = (unsigned char)b;
	}

	return (s);
}
