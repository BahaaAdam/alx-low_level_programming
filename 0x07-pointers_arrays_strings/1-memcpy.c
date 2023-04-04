#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest : destenation
 * @src : source
 * @n : number of bytes
 *
 * Return: copied memory with n bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int i = n;

	for (; j < i; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
