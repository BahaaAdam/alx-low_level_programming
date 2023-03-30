#include "main.h"

/**
 * *_strcat - a program that concatinates two strings
 * @dest: destionation string 1
 * @src: source string 2
 * Return: 0 (success)
 */


char *_strcat(char *dest, char *src)
{

	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
