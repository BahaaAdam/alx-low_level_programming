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
	char dest[i];
	char src[i];
	int n = 0;


	if (dest == NULL)
	{
		return (NULL);
	}


	while (src[n] != '\0')
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';

	return (dest);
}
