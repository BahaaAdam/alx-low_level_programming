#include "main.h"

/**
 * *_strchr - a function to locate a charcter in a string
 * @s : string array
 * @c : const
 * Return: 0 (success)
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}

	}
	return (0);
}
