#include "main.h"

/*
 * _memset - function to apoint memory for a certain char or int
 * @s : pointer to buffer
 * @i : counter variable
 * return: s
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
