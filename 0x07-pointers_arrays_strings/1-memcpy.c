#include "main.h"

/*
 *
 * *_memcpy - a function to copy the memory adress from n bytes from adress to another
 * @dest : destenation
 * @src : source
 *
 * Return: *dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int i = n;

	for (j < i, j++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
