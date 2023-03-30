#include "main.h"

/**
 * *_strncpy - a program to copy from source to destenation
 * @dest: destination string
 * @src: source string
 * @n: variable counter to help move from src to dest
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
