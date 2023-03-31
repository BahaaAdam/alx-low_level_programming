#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: string 1 value
 * @s2: string 2 value
 * Return: s1[i] - s2[i]
 */

int _strcmp(char *s1, char *s2) 
{
	int i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
	if (s1[i] != s2[i]
	{
		return (s1[i] > s2[i]) ? 1 : -1;
	}
	i++;
	}
	return (s1[i] == '\0' && s2[i] == '\0') ? 0 : ((s1[i] == '\0') ? -1 : 1);
}
